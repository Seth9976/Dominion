// 函数: _Z17CardGalleryUpdate9UI2Handle
// 地址: 0xb43ca4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x21 = arg1.d
UI2SetHandler(arg1, CardGalleryClick)
int64_t x1_1

if (*gCardGallery == 1)
    x1_1 = 2
else
    x1_1 = 1

GameSpecific_UpdateExpansionButtons(zx.q(x21), x1_1, 0)

if (*gCardGallery == 1)
    UI2SetState(zx.q(x21), &data_1831728, 0xffffffff, 0)

int32_t var_64

if ((CardsetIsZoomed(*(gDomClient + 0x82e28), &var_64) & 1) != 0)
    UI2SetState(zx.q(x21), &data_182db58, 0xffffffff, 0)
    
    if (*gCardGallery == 1)
        UI2SetState(zx.q(x21), &data_1831710, 0xffffffff, 0)
    
    int32_t x0_7
    
    if (*(gCardGallery + 0xc) == 0)
        x0_7 = GetCardsetZoom(*(gDomClient + 0x82e28))
    
    if (*(gCardGallery + 0xc) != 0 || x0_7 != 0)
        UI2SetState(zx.q(x21), &data_18316e0, 0xffffffff, 0)
    
    if ((CardGalleryZoomHasNextCard() & 1) != 0)
        UI2SetState(zx.q(x21), &data_18316f8, 0xffffffff, 0)
    
    int64_t x0_11 = CardGalleryZoomedCard()
    
    if (x0_11.d != 0)
        uint32_t x8_4
        
        if (x0_11.d != 0x1309)
            x8_4 = zx.d(*(DomDefGet(x0_11, 0x18) + 0xcd))
        
        if (x0_11.d == 0x1309 || (x8_4 & 0x10) != 0)
            UI2SetState(zx.q(x21), &data_182db40, 0xffffffff, 0)

float v0 = *(gCardGallery + 0x14)
float v1 = *gSecondsPerUpdate

if (zx.d(*(gCardGallery + 0x10)) != 0)
    float v2_1 = fconvert.s(1f)
    
    if (not(v0 == v2_1))
        v0 = v1 * fconvert.s(4f) + v0
        v1 = vmin_f32(v0, v2_1)
        goto label_b43e58
else if (not(v0 == 0f))
    v0 = v0 + v1 * fconvert.s(-4f)
    v1 = vmin_f32(v0, fconvert.s(1f))
label_b43e58:
    
    v0 = v0 < 0f ? 0f : v1
    
    *(gCardGallery + 0x14) = v0

int32_t x8_5 = *(gCardGallery + 0xc)

if (x8_5 == 0)
    UI2SetState(zx.q(x21), &data_1830e10, 0xffffffff, 0)
    x8_5 = *(gCardGallery + 0xc)

int64_t x9_1 = 0
char const* const x20 = "OOOOOO@OOOOCOOF"
int64_t x22_1
int32_t i

do
    x22_1 = x9_1
    i = *(&data_7ef624 + x9_1 * 0x1044)
    x9_1 = x22_1 + 1
    x20 = &x20[0x1044]
while (i != *(gCardGallery + 8))
int64_t x19 = 0
int32_t fp = 0
int32_t x23 = 0

while (true)
    int32_t x9_3 = *(&data_7ef624 + x22_1 * 0x1044 + muls.dp.d(x19.d, 0x104) + (sx.q(fp) << 2) + 8)
    int64_t x8_9 = sx.q(x19.d)
    
    if (x9_3 != 0)
        goto label_b43f2c
    
    if (*(&data_7ef624 + x22_1 * 0x1044 + x8_9 * 0x104 + 0x10c) != 0)
        fp = 0
    label_b43f2c:
        
        if (x9_3 == 0)
            x19 = x8_9 + 1
        else
            x19 = x8_9
        
        int64_t x28_1 = x19 * 0x104
        int64_t x25_1 = zx.q(fp) << 0x20 s>> 0x1e
        uint64_t x8_6 = 0
        int64_t x9_5
        
        if ((IsLandscape(zx.q(*(&data_7ef624 + x22_1 * 0x1044 + x28_1 + x25_1 + 8)), 0x18) & 1)
                != 0)
            x9_5 = 9
        else
            x9_5 = 8
        
        while (*(x20 + x28_1 + x25_1 + (x8_6 << 2)) != 0)
            x8_6 += 1
            
            if (x9_5 == x8_6)
                x8_6 = zx.q(x9_5.d)
                goto label_b43f94
        
        if (x23 != x8_5 + 1)
            x8_6 = 0
            fp = 0
            x19 = zx.q(x19.d + 1)
        label_b43ef4:
            x23 += 1
            fp += x8_6.d
            continue
        else
        label_b43f94:
            
            if (x23 != x8_5 + 1)
                goto label_b43ef4
        
        if (x8_6.d != 0)
            break
    
    UI2SetState(zx.q(x21), &data_1830e28, 0xffffffff, 0)
    break

return CardGalleryUpdateCards(zx.q(x21))
