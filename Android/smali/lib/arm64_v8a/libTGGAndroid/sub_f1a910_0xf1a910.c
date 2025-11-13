// 函数: sub_f1a910
// 地址: 0xf1a910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(arg1[3].b) == 0)
    return 

void* nbytes = arg3

if (arg3 == 0)
    return 

int32_t* x20_1 = arg1
void* buf = arg2

do
    arg1 = write(x20_1[2], buf, nbytes)
    
    if ((arg1 & 0xffffffff80000000) == 0)
        buf += arg1
        nbytes -= arg1
    else
        arg1 = __errno()
        int32_t x8_1 = *arg1
        
        if (x8_1 != 4)
            if (x8_1 == 1 || x8_1 == 9)
                break
            
            void* x0_1 = __cxa_allocate_exception(0x28)
            int64_t x0_2
            int128_t v0
            x0_2, v0 = operator new(0x20)
            int64_t var_30 = x0_2
            int128_t var_40 = data_71c520
            __builtin_strncpy(x0_2, "System_RNG write failed", 0x18)
            *arg1
            Botan::System_Error::System_Error(x0_1, &var_40)
            __cxa_throw(x0_1, _typeinfo_for_Botan::System_Error, Botan::Exception::~Exception)
            noreturn
while (nbytes != 0)
