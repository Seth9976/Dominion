// 函数: sub_e9c144
// 地址: 0xe9c144
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg2[1] = arg3
void* x21 = *arg2

if (x21 != 0)
    char* x8 = arg2[1]
    void* x0 = x21
    
    if (x8 != x21)
        char* x22_1 = x8
        
        do
            x22_1 = &x22_1[-0x18]
            
            if ((zx.d(*x22_1) & 1) != 0)
                operator delete(*(x8 - 8))
            
            x8 = x22_1
        while (x21 != x22_1)
        
        x0 = *arg2
    
    arg2[1] = x21
    operator delete(x0)

void* __offset(vtable_for_Botan::OID, 0x10) arg_20 = _vtable_for_Botan::OID + 0x10

if (arg4 != 0)
    void* arg_30 = arg4
    operator delete(arg4)

sub_1101e04(arg1)
noreturn
