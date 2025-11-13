// 函数: _Z15CardnamesUpdate9UI2Handle
// 地址: 0xba0bd8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, CardnamesClick)
UI2SetState(zx.q(x19), UIS_GAME, 0xffffffff, 0)
UI2SetState(zx.q(x19), UIS_POD_CARDNAMES, 0xffffffff, 0)
int32_t x24 = *(gCardnamesGlobals + 0xc84)
int32_t x8 = *(gCardnamesGlobals + 0xc80)
int32_t x22 = x24 * 0x14
int32_t x20 = x8 - x22
int32_t x23

x23 = x20 s< 0x14 ? x20 : 0x14

if (x24 s>= 1)
    UI2SetState(zx.q(x19), &data_1832b68, 0xffffffff, 0)

if (x24 s< (x8 + 0x13) s/ 0x14 - 1)
    UI2SetState(zx.q(x19), &data_1832b80, 0xffffffff, 0)

UI2SetInt(zx.q(x19), UIS_CARDNAME_ROWS, 4, 0xffffffff)
int64_t result = UI2SetInt(zx.q(x19), UIS_CARDNAME_NUM_CARDS, x23, 0xffffffff)

if (x20 s>= 1)
    uint64_t x22_1
    
    if (x23 s> 1)
        x22_1 = zx.q(x23)
    else
        x22_1 = 1
    
    int64_t x20_1 = 0
    void* x27_1 = &data_18375f0
    
    do
        DomCardDef* x0_14 = DomDefGet(zx.q(*(gCardnamesGlobals + (sx.q(x22) << 2) + (x20_1 << 2))), 
            zx.q(*(gDomClient + 0x21478)))
        
        if (*(x27_1 - 0x30) == "tbl_names" && *(x27_1 - 0x38) == x19
                && x20_1 == zx.q(*(x27_1 - 0x28)) && *(x27_1 - 0x20) == 0)
            result = UI2Exists(zx.q(*x27_1))
        
        int32_t x25_1
        
        if (*(x27_1 - 0x30) == "tbl_names" && *(x27_1 - 0x38) == x19
                && x20_1 == zx.q(*(x27_1 - 0x28)) && *(x27_1 - 0x20) == 0 && (result.d & 1) != 0)
            x25_1 = *x27_1
            
            if (x25_1 != 0)
                goto label_ba0d44
        else
            result = UI2GetHandle(zx.q(x19), "tbl_names", x20_1.d)
            *x27_1 = result.d
            
            if (result.d != 0)
                x25_1 = result.d
                *(x27_1 - 0x30) = "tbl_names"
                *(x27_1 - 0x38) = x19
                *(x27_1 - 0x28) = x20_1.d
                *(x27_1 - 0x20) = 0
            label_ba0d44:
                UI2SetState(zx.q(x25_1), x0_14 + 0x90, 0xffffffff, 0)
                DomDeclareCardComponents(zx.q(x25_1), x0_14, nullptr, 0, 0)
                DomDeclareType(zx.q(x25_1), x0_14, 0)
                DomDeclareExpansion(zx.q(x25_1), x0_14)
                UI2SetState(zx.q(x25_1), &data_182d4c8, 0xffffffff, 0)
                UI2SetState(zx.q(x25_1), &data_182b368, 0xffffffff, 0)
                result = UI2SetState(zx.q(x25_1), &data_182b440, 0xffffffff, 0)
        x20_1 += 1
        x27_1 += 0x40
    while (x22_1 != x20_1)

return result
