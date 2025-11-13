// 函数: ___security_init_cookie
// 地址: 0x75a2d8
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t __security_cookie_1 = __security_cookie

if (__security_cookie_1 == 0xbb40e64e || (0xffff0000 & __security_cookie_1) == 0)
    uint32_t __security_cookie_2 = sub_75a28b()
    __security_cookie_1 = __security_cookie_2
    
    if (__security_cookie_1 == 0xbb40e64e)
        __security_cookie_1 = 0xbb40e64f
    else if ((0xffff0000 & __security_cookie_1) == 0)
        __security_cookie_1 |= (__security_cookie_2 | 0x4711) << 0x10
    
    __security_cookie = __security_cookie_1

data_8c4080 = not.d(__security_cookie_1)
