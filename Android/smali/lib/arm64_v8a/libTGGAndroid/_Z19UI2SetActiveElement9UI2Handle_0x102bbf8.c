// 函数: _Z19UI2SetActiveElement9UI2Handle
// 地址: 0x102bbf8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

UI2EditorSyncSelection(arg1)
void* x8_1 = *gUI2 + mulu.dp.d(zx.d(arg1.w), 0x19a8)
*(gUI2Editor + 0x604c) = *(x8_1 + 0x1690)
*(gUI2Editor + 0x704c) = 1
uint64_t i_1 = zx.q(*(gUI2Editor + 0x6000))
int64_t (* const x9_2)()
int64_t (* const x11_1)()

if (i_1.d s>= 1)
    x9_2 = gUI2Editor
    x11_1 = gUI2Editor
    uint64_t i
    
    do
        if (*x11_1 == x8_1)
            goto label_102bc90
        
        i = i_1
        i_1 -= 1
        x11_1 += 0x18
    while (i != 1)

pthread_kill(pthread_self(), 6)
x9_2, x11_1 = XNoReturn()
label_102bc90:
*(x9_2 + 0x7050) = *(x11_1 + 0xc)
return memcpy(x9_2 + sx.q(*(x9_2 + 0x88060)) * 0x1020 + 0x6040, x9_2 + 0x6048, 0x1018) __tailcall
