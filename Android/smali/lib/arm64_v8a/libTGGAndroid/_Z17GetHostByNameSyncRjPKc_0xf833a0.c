// 函数: _Z17GetHostByNameSyncRjPKc
// 地址: 0xf833a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

struct hostent* result = gethostbyname(arg2)

if (result != 0)
    if (result->h_length != 4 || result->h_addrtype != 2)
        return 0
    
    char** h_addr_list = result->h_addr_list
    result = 1
    *arg1 = **h_addr_list

return result
