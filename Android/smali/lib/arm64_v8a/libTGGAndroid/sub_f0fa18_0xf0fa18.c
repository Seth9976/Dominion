// 函数: sub_f0fa18
// 地址: 0xf0fa18
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[6]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::SM2_Decryption_Operation{for `Botan::PK_Ops::Decryption'}

if (x20 != 0)
    int64_t* x8_1 = arg1[7]
    void* x0_1
    
    if (x8_1 == x20)
        x0_1 = x20
    else
        int64_t* x21_1 = x8_1
        
        do
            x21_1 = &x21_1[-5]
            void* x0 = *x21_1
            
            if (x0 != 0)
                int64_t x9_1 = x8_1[-3]
                x8_1[-4] = x0
                Botan::deallocate_memory(x0, (x9_1 - x0) s>> 2, 4)
            
            x8_1 = x21_1
        while (x20 != x21_1)
        
        x0_1 = arg1[6]
    
    arg1[7] = x20
    operator delete(x0_1)

if ((zx.d(arg1[3].b) & 1) != 0)
    return operator delete(arg1[5]) __tailcall
