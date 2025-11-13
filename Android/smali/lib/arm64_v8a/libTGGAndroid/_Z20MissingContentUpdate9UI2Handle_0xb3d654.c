// 函数: _Z20MissingContentUpdate9UI2Handle
// 地址: 0xb3d654
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
int64_t x1_1
int32_t x3
x1_1, x3 = UI2SetHandler(arg1, MissingContentClick)
bool var_54 = false
DlcDef* var_e8[0x12]
int32_t x0_1 = GetRequiredDLCs(zx.q(*gMissingContent), x1_1, &var_e8, x3, &var_54)
UI2SetInt(zx.q(x19), &data_1830828, x0_1, 0xffffffff)

if (zx.d(var_54) != 0)
    UI2SetState(zx.q(x19), &data_1830858, 0xffffffff, 0)

int64_t result = UI2SetState(zx.q(x19), LookupMissingLayout(x0_1), 0xffffffff, 0)

if (x0_1 s>= 1)
    int64_t i = 0
    
    do
        DLC* x24_1 = var_e8[i]
        UI2SetState(zx.q(x19), *(x24_1 + 0x38), i.d, 0)
        int32_t x0_10 = ProfileDLCState(x24_1)
        uint64_t x0_7
        UI2StateDecl* x1_3
        int32_t x2_2
        
        if (x0_10 == 1)
            x0_7 = zx.q(x19)
            x1_3 = &data_1830810
            x2_2 = i.d
        else
            x2_2 = -1
            
            if (x0_10 != 0)
                x0_7 = zx.q(x19)
                x1_3 = &data_18307f8
            else
                x0_7 = zx.q(x19)
                x1_3 = &data_1830840
        
        result = UI2SetState(x0_7, x1_3, x2_2, 0)
        i += 1
    while (zx.q(x0_1) != i)

if (*(gMissingContent + 8) != 2)
    return result

return UI2SetState(zx.q(x19), &data_1830870, 0xffffffff, 0)
