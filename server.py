import socket

# Create socket (IPv4, TCP)
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Bind to IP and port
server_socket.bind(("127.0.0.1", 8080))

# Listen for incoming connections
server_socket.listen(1)
print("Server is listening...")

# Accept connection
conn, addr = server_socket.accept()
print("Connected by", addr)

# Receive data
data = conn.recv(1024)
print("Client says:", data.decode())

# Send response
conn.sendall(b"Hello from server")

# Close connection
conn.close()
server_socket.close()
