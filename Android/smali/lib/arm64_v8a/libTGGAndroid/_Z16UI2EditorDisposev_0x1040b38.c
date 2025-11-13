// 函数: _Z16UI2EditorDisposev
// 地址: 0x1040b38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gUI2Editor + 0x88064) s>= 1)
    int64_t i = 0
    int64_t (* x22_1)() = gUI2Editor + 0x8078
    
    do
        DefinitionDelete(*x22_1)
        i += 1
        x22_1 += 0x1020
    while (i s< sx.q(*(gUI2Editor + 0x88064)))

*(gUI2Editor + 0x88060) = 0
*(gUI2Editor + 0x704c) = 0

if (*(gUI2Editor + 0x6010) == 0)
    return 

*(gUI2Editor + 0x6008) = 0
UI2Free(gUI2Editor + 0x6010)
*(gUI2Editor + 0x6010) = 0
