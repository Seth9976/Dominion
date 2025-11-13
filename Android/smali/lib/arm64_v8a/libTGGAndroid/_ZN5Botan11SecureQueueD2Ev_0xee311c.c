// 函数: _ZN5Botan11SecureQueueD2Ev
// 地址: 0xee311c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
*entry_x0 = _vtable_for_Botan::SecureQueue + 0x10
entry_x0[0xa] = _vtable_for_Botan::SecureQueue + 0x88
int64_t* i_1 = entry_x0[0xc]

if (i_1 != 0)
    int64_t* i
    
    do
        i = *i_1
        void* x0_2 = i_1[1]
        *i_1 = 0
        i_1[4] = 0
        i_1[5] = 0
        
        if (x0_2 != 0)
            int64_t x8_3 = i_1[3]
            i_1[2] = x0_2
            Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)
        
        operator delete(i_1)
        i_1 = i
    while (i != 0)

entry_x0[0xc] = 0
entry_x0[0xd] = 0
void* x0 = entry_x0[4]
*entry_x0 = _vtable_for_Botan::Filter + 0x10

if (x0 != 0)
    entry_x0[5] = x0
    operator delete(x0)

void* result = entry_x0[1]

if (result == 0)
    return result

int64_t x8_2 = entry_x0[3]
entry_x0[2] = result
return Botan::deallocate_memory(result, x8_2 - result, 1)
