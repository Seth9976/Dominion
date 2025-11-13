// 函数: _Z18AchievementsUpdate9UI2Handle
// 地址: 0xb40da4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, AchievementsClick)
GameSpecific_UpdateExpansionButtons(zx.q(x19), 4, 0)
void* var_58
int32_t i_3 = DomExpGet(zx.q(*gAchievementsData), &var_58)
int64_t var_1960[0x120]
int32_t x23

if (i_3 s< 1)
    x23 = 0
else
    void* x8_1 = var_58
    x23 = 0
    uint64_t i_2 = zx.q(i_3)
    uint64_t i
    
    do
        int32_t x11_2 = *(x8_1 + 0xe0)
        
        if (x11_2 - 0x12 u< 2)
            var_1960[sx.q(x23)] = x8_1
            x23 += 1
        else if (x11_2 != 0)
            int32_t x11_3 = *(x8_1 + 0x1a0)
            
            if (x11_3 - 0x12 u< 2)
                var_1960[sx.q(x23)] = x8_1
                x23 += 1
            else if (x11_3 != 0)
                int32_t x11_4 = *(x8_1 + 0x260)
                
                if (x11_4 - 0x12 u< 2)
                    var_1960[sx.q(x23)] = x8_1
                    x23 += 1
                else if (x11_4 != 0)
                    int32_t x11_5 = *(x8_1 + 0x320)
                    
                    if (x11_5 - 0x12 u< 2)
                        var_1960[sx.q(x23)] = x8_1
                        x23 += 1
                    else if (x11_5 != 0)
                        int32_t x11_6 = *(x8_1 + 0x3e0)
                        
                        if (x11_6 - 0x12 u< 2)
                            var_1960[sx.q(x23)] = x8_1
                            x23 += 1
                        else if (x11_6 != 0)
                            int32_t x11_7 = *(x8_1 + 0x4a0)
                            
                            if (x11_7 - 0x12 u< 2)
                                var_1960[sx.q(x23)] = x8_1
                                x23 += 1
                            else if (x11_7 != 0)
                                int32_t x11_8 = *(x8_1 + 0x560)
                                
                                if (x11_8 - 0x12 u< 2)
                                    var_1960[sx.q(x23)] = x8_1
                                    x23 += 1
                                else if (x11_8 != 0 && (*(x8_1 + 0x620) & 0xfffffffe) == 0x12)
                                    var_1960[sx.q(x23)] = x8_1
                                    x23 += 1
        
        i = i_2
        i_2 -= 1
        x8_1 += 0x780
    while (i != 1)

int32_t x8_2 = *(gAchievementsData + 4)

if (x8_2 != 0)
    UI2SetState(zx.q(x19), &data_1830e40, 0xffffffff, 0)
    x8_2 = *(gAchievementsData + 4)

int32_t x9_2

if (x23 + 7 s< 0)
    x9_2 = x23 + 0xe
else
    x9_2 = x23 + 7

int32_t x11_11 = x23 - (x8_2 << 3)
int32_t x20

x20 = x11_11 s< 8 ? x11_11 : 8

if (x8_2 s< (x9_2 s>> 3) - 1)
    UI2SetState(zx.q(x19), &data_1830e58, 0xffffffff, 0)

UI2SetInt(zx.q(x19), &data_1831620, x20, 0xffffffff)
uint64_t result

for (int32_t i_1 = 0; i_1 != 8; i_1 += 1)
    int32_t x27_1 = i_1 + (*(gAchievementsData + 4) << 3)
    int32_t x0_6
    
    if (data_182abd0 == "tbl_achievements" && data_182a888 == x19 && i_1 == data_182a890)
        x0_6 = UI2Exists(zx.q(data_182a898))
    
    if (data_182abd0 == "tbl_achievements" && data_182a888 == x19 && i_1 == data_182a890
            && (x0_6 & 1) != 0)
        result = zx.q(data_182a898)
        
        if (x27_1 s>= x23)
            break
        
        goto label_b41000
    
    result = UI2GetHandle(zx.q(x19), "tbl_achievements", i_1)
    data_182a898 = result.d
    
    if (result.d != 0)
        data_182abd0 = "tbl_achievements"
        data_182a888 = x19
        data_182a890 = i_1
        
        if (x27_1 s>= x23)
            break
        
    label_b41000:
        
        if (result.d != 0)
            result = DeclareAchievement(result, var_1960[sx.q(x27_1)], false)
    else if (x27_1 s>= x23)
        break

return result
