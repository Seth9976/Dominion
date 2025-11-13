// 函数: _Z18DomMapProcessQueuev
// 地址: 0xc14878
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(gMapGlobals + 0x38) == 0 || (MutexTryLock(gMapGlobals + 0x68).d & 1) == 0)
    return 

MutexLock(gMapGlobals + 0x40)
void* x8_1 = *(gMapGlobals + 0x90)

if (*(x8_1 + 4) == 0)
    *(x8_1 + 4) = 1
    void* x0_3 = *(gMapGlobals + 0x28)
    void* x8_2 = *(x0_3 + 8)
    *(gMapGlobals + 0x28) = x8_2
    int64_t (* x8_3)()
    
    if (x8_2 == 0)
        x8_3 = gMapGlobals + 0x30
    else
        x8_3 = x8_2 + 0x10
    
    *x8_3 = 0
    int32_t x22_1 = *x0_3
    *(gMapGlobals + 0x38) -= 1
    XPooledFree(x0_3, 0x18)
    **(gMapGlobals + 0x90) = x22_1
    int16_t* x0_4 = *(gMapGlobals + 0x90)
    int32_t* x22_2 = *gMapGlobals + zx.q(*x0_4) * 0x5118
    memcpy(&x0_4[4], &x22_2[2], 0x5108)
    *x22_2 = 1
    *(gMapGlobals + 0x98) = thread_create(DomMapGenerateThread, nullptr)

MutexUnlock(gMapGlobals + 0x40)
return MutexUnlock(gMapGlobals + 0x68) __tailcall
