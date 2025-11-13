// 函数: sub_d035b8
// 地址: 0xd035b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

std::__ndk1::recursive_mutex::unlock()
int64_t* x0_1 = arg2[0xc]
arg2[0xc] = 0
int64_t* x0_2

if (x0_1 == 0)
    x0_2 = *arg3
    *arg3 = 0
    
    if (x0_2 != 0)
        (*(*x0_2 + 0x10))()
else
    (*(*x0_1 + 8))()
    x0_2 = *arg3
    *arg3 = 0
    
    if (x0_2 != 0)
        (*(*x0_2 + 0x10))()
*arg2 = arg4 + 0x10
std::__ndk1::recursive_mutex::~recursive_mutex()
sub_1101e04(arg1)
noreturn
