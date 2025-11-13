// 函数: _Z19MigrateAchievementsR11GameProfilePK23ProfileAchievement_Savei
// 地址: 0x9dcae0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg3 s< 1)
    return 

uint64_t i_1 = zx.q(arg3)
void* __offset(ProfileAchievement_Save, 0x4) x22_1 = arg2 + 4
uint64_t i

do
    int32_t var_44
    int32_t x0_2 = DomCardExp(zx.q(*(x22_1 - 4)), &var_44)
    uint64_t x2 = 0
    uint64_t x9_2 = zx.q(*x22_1 - 3)
    
    if (x9_2.d u<= 0x2a)
        switch (x9_2)
            case 0, 0x20
                x2 = 0x18e70
            case 0x1b
                x2 = 0x18a88
            case 0x21
                x2 = 0x19258
            case 0x22
                x2 = 0x19640
            case 0x23
                x2 = 0x19a28
            case 0x2a
                x2 = 0x1a1f8
    
    SyncedDataSet(arg1, zx.q(var_44 + x0_2 * 0x64 + 0xf4628), x2)
    i = i_1
    i_1 -= 1
    x22_1 += 8
while (i != 1)
