// 函数: _ZN5Botan14XMSS_PublicKeyD2Ev
// 地址: 0xecd4ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x1
void* x8 = *entry_x1
int64_t* entry_x0
*entry_x0 = x8
*(entry_x0 + *(x8 - 0x88)) = entry_x1[1]
void* x0 = entry_x0[0x21]

if (x0 != 0)
    int64_t x8_2 = entry_x0[0x23]
    entry_x0[0x22] = x0
    Botan::deallocate_memory(x0, x8_2 - x0, 1)

void* x0_1 = entry_x0[0x1e]

if (x0_1 != 0)
    int64_t x8_3 = entry_x0[0x20]
    entry_x0[0x1f] = x0_1
    Botan::deallocate_memory(x0_1, x8_3 - x0_1, 1)

if ((zx.d(entry_x0[0x14].b) & 1) == 0)
    if ((zx.d(entry_x0[0x11].b) & 1) != 0)
        goto label_ecd588
    
    goto label_ecd554

operator delete(entry_x0[0x16])

if ((zx.d(entry_x0[0x11].b) & 1) != 0)
label_ecd588:
    operator delete(entry_x0[0x13])
    
    if ((zx.d(entry_x0[8].b) & 1) == 0)
        goto label_ecd55c
    
    goto label_ecd598

label_ecd554:

if ((zx.d(entry_x0[8].b) & 1) == 0)
label_ecd55c:
    
    if ((zx.d(entry_x0[5].b) & 1) != 0)
        goto label_ecd5a8
    
    goto label_ecd560

label_ecd598:
operator delete(entry_x0[0xa])
void* result

if ((zx.d(entry_x0[5].b) & 1) == 0)
label_ecd560:
    result = entry_x0[1]
    
    if (result != 0)
        entry_x0[2] = result
        return operator delete(result) __tailcall
else
label_ecd5a8:
    operator delete(entry_x0[7])
    result = entry_x0[1]
    
    if (result != 0)
        entry_x0[2] = result
        return operator delete(result) __tailcall

return result
