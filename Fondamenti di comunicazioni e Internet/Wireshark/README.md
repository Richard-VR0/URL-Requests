# 1-TCP
HTTP request with TCP connection
<br>
Filter: tcp.port==80

# 2-HTTPS
HTTPS request with TCP connection
<br>
Filter: tcp.port==443

# 3-DNS
DNS request with UDP protocol
<br>
Filter: udp.stream eq 3

# 4-ICMP
Ping command packets
<br>
Filter>: icmp
