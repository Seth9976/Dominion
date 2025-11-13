// 函数: _Z33DefStructureUnbindGraphicsBuffersP12DefStructure
// 地址: 0xfd276c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x19 = *arg1

if (x19 == 0 || *x19 s< 1)
    return 

int64_t x20_1 = 0
int64_t i = 0

do
    void* x23_1 = *(x19 + 8)
    void* x24_1 = x23_1 + x20_1
    
    if (*(x24_1 + 0x38) != 0)
        (*(**gGraphicsInterface + 0x60))()
        *(x24_1 + 0x38) = 0
    
    if (*(x24_1 + 0x3c) != 0)
        (*(**gGraphicsInterface + 0x78))()
        *(x24_1 + 0x3c) = 0
    
    void* x24_2 = x23_1 + x20_1
    
    if (*(x24_2 + 0x40) != 0)
        (*(**gGraphicsInterface + 0x60))()
        *(x24_2 + 0x40) = 0
    
    if (*(x24_2 + 0x44) != 0)
        (*(**gGraphicsInterface + 0x78))()
        *(x24_2 + 0x44) = 0
    
    *(x23_1 + x20_1 + 0x48) = 0
    i += 1
    x20_1 += 0x150
while (i s< sx.q(*x19))
