// 函数: spSkin_clear
// 地址: 0xfb6a50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* i_2 = *(arg1 + 0x28)

if (i_2 != 0)
    void* i
    
    do
        i = *(i_2 + 0x18)
        spAttachment_dispose(*(i_2 + 0x10))
        _spFree(*(i_2 + 8))
        _spFree(i_2)
        i_2 = i
    while (i != 0)

int64_t i_1 = 0
void* x22 = arg1 + 0x30
*(arg1 + 0x28) = 0
void* result

do
    result = *x22
    
    if (result != 0)
        void* j
        
        do
            j = *(result + 8)
            _spFree()
            result = j
        while (j != 0)
    
    *(arg1 + 0x30 + (i_1 << 3)) = 0
    i_1 += 1
    x22 += 8
while (i_1 != 0x64)

**(arg1 + 8) = 0
**(arg1 + 0x10) = 0
**(arg1 + 0x18) = 0
**(arg1 + 0x20) = 0
return result
