// 函数: _Z20UpdateCenterArea_old9UI2Handle
// 地址: 0xba36e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x22
int32_t x23

if (*(gDomClient + 0x21e24) == 0)
    x22 = 0xa
    
    if (*(gDomClient + 0x21e74) != 0)
    label_ba37b4:
        
        if (*(gDomClient + 0x21e84) == 0)
            x23 = 1
        else if (*(gDomClient + 0x21e94) == 0)
            x23 = 2
        else if (*(gDomClient + 0x21ea4) == 0)
            x23 = 3
        else if (*(gDomClient + 0x21eb4) != 0)
            x23 = 5
        else
            x23 = 4
    else
        x23 = 0
else if (*(gDomClient + 0x21e34) == 0)
    x22 = 0xb
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_ba37b4
    
    x23 = 0
else if (*(gDomClient + 0x21e44) == 0)
    x22 = 0xc
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_ba37b4
    
    x23 = 0
else if (*(gDomClient + 0x21e54) == 0)
    x22 = 0xd
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_ba37b4
    
    x23 = 0
else
    if (*(gDomClient + 0x21e64) != 0)
        x22 = 0xf
    else
        x22 = 0xe
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_ba37b4
    
    x23 = 0

int32_t x0 = NumExtraPiles()
int64_t result = NearestAspectRatio()
int32_t x9_14

if (x23 - 1 u< 2)
    x9_14 = x0 + 8
else
    x9_14 = x0

int32_t x9_15

if (x23 - 3 u< 2)
    x9_15 = x9_14 + 0x18
else
    x9_15 = x9_14

int32_t x20 = result.d
int32_t x9_16

if (x22 == 0xb)
    x9_16 = x9_15 + 4
else
    x9_16 = x9_15

int32_t x10_4

if (x23 == 0)
    if (x9_16 + 7 s< 0)
        x10_4 = x9_16 + 0xe
    else
        x10_4 = x9_16 + 7

int32_t x21_1
uint32_t x23_1

if (x23 == 0 && x9_16 s< 9)
    x21_1 = (x10_4 s>> 3) + 5
    x23_1 = (x23 - 1 u< 2 ? 1 : 0) << 8
    
    if (x22 == 0xb)
        result = UI2SetState(zx.q(x19), &data_1832f70, 0xffffffff, 0)
else
    int32_t x8_5 = x23 * 3 + x0
    int32_t x8_6
    
    if (x22 == 0xb)
        x8_6 = x8_5 + 4
    else
        x8_6 = x8_5
    
    int32_t x9_17
    
    x9_17 = x22 == 0xb ? 6 : 5
    
    if (x9_17 s< (x8_6 - 5) s/ 0xb + 5)
        x21_1 = x9_17
    else
        x21_1 = (x8_6 - 5) s/ 0xb + 5
    
    x23_1 = 1
    
    if (x22 == 0xb)
        result = UI2SetState(zx.q(x19), &data_1832f70, 0xffffffff, 0)

int64_t* x1

if ((x23_1 & 1) != 0)
    if (x21_1 - 5 u>= 3)
        pthread_kill(pthread_self(), 6)
        return GameSpecific_GetAssetsToLoad(XNoReturn()) __tailcall
    
    x1 = (&data_1153fd8)[sx.q(x21_1) - 5]
else if (x21_1 == 7)
    x1 = &data_1832f40
else if (x21_1 == 6)
    x1 = &data_1832f28
else
    if (x21_1 != 5)
        pthread_kill(pthread_self(), 6)
        return GameSpecific_GetAssetsToLoad(XNoReturn()) __tailcall
    
    if (x20 != 0)
        return result
    
    x1 = &data_1832f58

return UI2SetState(zx.q(x19), x1, 0xffffffff, 0) __tailcall
