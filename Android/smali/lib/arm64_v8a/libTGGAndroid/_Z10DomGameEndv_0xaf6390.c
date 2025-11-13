// 函数: _Z10DomGameEndv
// 地址: 0xaf6390
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

GameDlgManagerDismiss(2, false)

if (*gDomClient != 0)
    *(*(gDomClient + 8) + 0x10) = 1
    co_destroy(gDomClient)
    *(*(gDomClient + 8) + 0x10) = 0

*(gDomClient + 0x20) = 0

if (*(gDomClient + 0x81448) != 0)
    co_destroy(gDomClient + 0x81448)

PreloadCardSoundPurge()
GameDlgManagerDismiss(3, false)
DomAIDisposeOne(gDomClient + 0x20698, 0)
DomAIDisposeOne(gDomClient + 0x206b0, 1)
DomAIDisposeOne(gDomClient + 0x206c8, 2)
DomAIDisposeOne(gDomClient + 0x206e0, 3)
DomAIDisposeOne(gDomClient + 0x206f8, 4)
DomAIDisposeOne(gDomClient + 0x20710, 5)
DomAIDisposeSys()
uint64_t x9 = zx.q(*(gDomClient + 0x205e8))
void* i_1 = *(gDomClient + 0x205e0)

if (x9.d != 0)
    void* i = i_1
    
    do
        if (zx.d(*(i + 0x21d2)) != 0)
            while (i != 0xffffffff)
                UI2Free(i + 0x2148)
                UI2Free(i + 0x214c)
                UI2Free(i + 0x2150)
                UI2Free(i + 0x2154)
                uint32_t x0_13 = *(i + 0x1f90)
                
                if (x0_13 != 0)
                    SpineDestroy(x0_13)
                
                int32_t x9_1 = *(gDomClient + 0x205f0)
                *(gDomClient + 0x205f0) = zx.d(*(i + 0x21d0))
                *(i + 0x21d0) = x9_1
                i_1 = *(gDomClient + 0x205e0)
                x9 = zx.q(*(gDomClient + 0x205e8))
                i += 0x21d8
                *(gDomClient + 0x205f4) -= 1
                int64_t x10_2 = i_1 + x9 * 0x21d8
                
                if (x10_2 u<= i)
                    break
                
                while (zx.d(*(i + 0x21d2)) == 0)
                    i += 0x21d8
                    
                    if (i u>= x10_2)
                        goto label_af6594
            
            break
        
        i += 0x21d8
    while (i u< i_1 + x9 * 0x21d8)

label_af6594:

if (x9.d != 0)
    void* x11_4 = i_1 + mulu.dp.d(x9.d, 0x21d8)
    
    while (true)
        int32_t x12_1 = *(i_1 + 0x21d0)
        
        if (x12_1 u>> 0x10 != 0)
            int32_t x11_5 = *(gDomClient + 0x205f0)
            *(gDomClient + 0x205f0) = x12_1 & 0xffff
            *(i_1 + 0x21d0) = x11_5
            int64_t x12_3 = *(gDomClient + 0x205e0)
            uint64_t x13_3 = zx.q(*(gDomClient + 0x205e8))
            i_1 += 0x21d8
            *(gDomClient + 0x205f4) -= 1
            x11_4 = x12_3 + x13_3 * 0x21d8
            
            if (x11_4 u<= i_1)
                break
        else
            i_1 += 0x21d8
            
            if (i_1 u>= x11_4)
                break

*(gDomClient + 0x205e8) = 0
*(gDomClient + 0x205f0) = 0
*(gDomClient + 0x205d8) = 0
*(gDomClient + 0x20640) = 0
*(gDomClient + 0x20648) = 0
memset(gDomClient + 0x28, 0, 0x20598)
*(gDomClient + 0x24) = 0
*(gDomClient + 0x3c) = 0xffffffff
*(gLogData + 0xc08) = 0xffffffff
*(gLogData + 0xc10) = 0xffffffff
*(gLogData + 0xc0c) = 0
return DomLogClear() __tailcall
