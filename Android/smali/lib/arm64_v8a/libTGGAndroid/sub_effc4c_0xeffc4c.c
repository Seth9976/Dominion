// 函数: sub_effc4c
// 地址: 0xeffc4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[0x3c]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::ECIES_ECDH_KA_Operation{for `Botan::PK_Ops::Key_Agreement_with_KDF'}

if (x20 != 0)
    int64_t* x8_1 = arg1[0x3d]
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
        
        x0_1 = arg1[0x3c]
    
    arg1[0x3d] = x20
    operator delete(x0_1)

sub_eff614(&arg1[2])
int64_t* result = arg1[1]
*arg1 = _vtable_for_Botan::PK_Ops::Key_Agreement_with_KDF + 0x10
arg1[1] = 0

if (result == 0)
    return result

jump(*(*result + 8))
