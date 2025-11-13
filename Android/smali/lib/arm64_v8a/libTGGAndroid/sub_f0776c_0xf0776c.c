// 函数: sub_f0776c
// 地址: 0xf0776c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x20 = arg1[0x12]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::Fixed_Window_Exponentiator{for `Botan::Modular_Exponentiator'}

if (x20 != 0)
    int64_t* x8_1 = arg1[0x13]
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
        
        x0_1 = arg1[0x12]
    
    arg1[0x13] = x20
    operator delete(x0_1)

void* x0_2 = arg1[0xc]

if (x0_2 != 0)
    int64_t x8_3 = arg1[0xe]
    arg1[0xd] = x0_2
    Botan::deallocate_memory(x0_2, (x8_3 - x0_2) s>> 2, 4)

void* x0_3 = arg1[6]

if (x0_3 != 0)
    int64_t x8_5 = arg1[8]
    arg1[7] = x0_3
    Botan::deallocate_memory(x0_3, (x8_5 - x0_3) s>> 2, 4)

void* result = arg1[1]

if (result == 0)
    return result

int64_t x8_7 = arg1[3]
arg1[2] = result
return Botan::deallocate_memory(result, (x8_7 - result) s>> 2, 4)
