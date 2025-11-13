// 函数: sub_d02ec4
// 地址: 0xd02ec4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::recursive_mutex::unlock()
int64_t* x0_4 = arg2[0xc]
arg2[0xc] = 0
int64_t* x0

if (x0_4 == 0)
    x0 = *arg4
    *arg4 = 0
    
    if (x0 != 0)
        (*(*x0 + 0x10))()
else
    (*(*x0_4 + 8))()
    x0 = *arg4
    *arg4 = 0
    
    if (x0 != 0)
        (*(*x0 + 0x10))()
*arg2 = arg3 + 0x10
std::__ndk1::recursive_mutex::~recursive_mutex()
sub_1101e04(arg1)
noreturn
