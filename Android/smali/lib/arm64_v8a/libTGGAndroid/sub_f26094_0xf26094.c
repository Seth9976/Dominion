// 函数: sub_f26094
// 地址: 0xf26094
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg2
arg2 = nullptr

if (x20 != 0)
    if (zx.d(arg3) != 0)
        void* x0 = *(x20 + 0x30)
        *(x20 + 0x28) = _vtable_for_Botan::OID + 0x10
        
        if (x0 != 0)
            *(x20 + 0x38) = x0
            operator delete(x0)
        
        if ((zx.d(*(x20 + 0x10)) & 1) != 0)
            operator delete(*(x20 + 0x20))
    
    operator delete(x20)

sub_1101e04(arg1)
noreturn
