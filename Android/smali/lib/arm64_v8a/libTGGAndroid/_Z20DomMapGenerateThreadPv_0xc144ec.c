// 函数: _Z20DomMapGenerateThreadPv
// 地址: 0xc144ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

MutexLock(gMapGlobals + 0x68)
void* x8 = *(gMapGlobals + 0x90)
DomMapGenerate(x8 + 0x5028, x8 + 0x5110, x8 + 0x21b0f8)
MutexUnlock(gMapGlobals + 0x68)
MutexLock(gMapGlobals + 0x40)
*(*(gMapGlobals + 0x90) + 4) = 2
MutexUnlock(gMapGlobals + 0x40)
return 0
