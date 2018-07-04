## NAT64

#### it is easy to  transform  IPv4 -only into support IPv6 DNS64/NAT64 Networks./将只有ipv4的地址转换为ipv6支持地址
### This tool solves the problem that IPv4 server address can not be connected under IPv6-only.
### 本工具解决IPv4服务器地址在IPv6-only下无法访问的问题

Under the IPv6  Network's Situation, the server IP of IPv4 transform to IPv6，under the IPv4 network ,it return itself.
在IPv6网络环境下，将IPv4服务器ip转换为IPv6地址，在IPv4下，服务器地址不变。

## Usage
###### Pull the resource code into your project
```OC

#import "NAT64.h"
NSString *Ip =  [NAT64 retrunipwithip:@"1.1.1.1" andport:@"111"];

```
## License

JSONNeverDie is open-sourced software licensed under the MIT license.
