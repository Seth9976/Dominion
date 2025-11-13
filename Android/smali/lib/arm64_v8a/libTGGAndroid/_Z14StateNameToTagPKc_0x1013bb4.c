// 函数: _Z14StateNameToTagPKc
// 地址: 0x1013bb4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

for (int64_t* i = *UI2StateDeclI_head; i != 0; i = i[1])
    if (strcasecmp(i[2], arg1) == 0)
        return i

int64_t* x0_2 = operator new(0x20)
*x0_2 = _vtable_for_UI2StateDeclName + 0x10
XString::XString()
void* x24_1 = *UI2StateDeclI_head

if (x24_1 == 0)
label_1013c4c:
    (**x0_2)(x0_2, arg1)
    uint64_t x9_1 = *UI2StateDeclI_head
    *UI2StateDeclI_head = x0_2
    uint32_t x10_1 = *UI2StateDeclI_counter
    x0_2[1] = x9_1
    *UI2StateDeclI_counter = x10_1 + 1
else
    while (true)
        char* s1 = *(x24_1 + 0x10)
        
        if (strcasecmp(s1, arg1) == 0)
            (**x0_2)(x0_2, s1)
            break
        
        x24_1 = *(x24_1 + 8)
        
        if (x24_1 == 0)
            goto label_1013c4c

return x0_2
