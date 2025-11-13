// 函数: _Z17EarnedAchievement9PlayerWho11DomCardEnumbbb
// 地址: 0xb4ed54
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = arg3.d
int32_t x19 = arg2
int32_t x20 = arg1
void* result = ActiveGame()

if ((zx.d(*(result + 0x20)) & 1) == 0)
    void* result_1 = result
    result = ProfileHasEntitlementForCard(zx.q(x19))
    
    if ((result.d & 1) != 0)
        int32_t x0_4 = SyncedAchiementLevelFromAILevel(x23.b & 1, 
            zx.q(GameSetupAILevelFlag(result_1 + 8)), (*(result_1 + 0x20) u>> 3).b & 1)
        result = GetLocalAchievementState(zx.q(x20), zx.q(x19))
        
        if ((x23 & 1) == 0)
            if (x0_4 s>= result.d)
            label_b4ede4:
                SetLocalAchievementState(zx.q(x20), zx.q(x19), zx.q(x0_4))
                result = GetClient()
                
                if ((x23 & 1) != 0 && (arg5.d & 1) == 0)
                    result = LocalWho()
                    
                    if (result.d == x20)
                        int64_t x9 = sx.q(*(gDomClient + 0x84418))
                        
                        if (x9.d == 8)
                            return XTrace("too many achievement popups") __tailcall
                        
                        *(gDomClient + 0x84418) = x9.d + 1
                        *(gDomClient + x9 * 0x14 + 0x84378) = x20
                        *(gDomClient + x9 * 0x14 + 0x8437c) = x19
                        *(gDomClient + x9 * 0x14 + 0x84380) = x0_4
                        *(gDomClient + x9 * 0x14 + 0x84384) = 0
                        *(gDomClient + x9 * 0x14 + 0x84388) = 0x404ccccd
        else if (x0_4 s> result.d)
            goto label_b4ede4

return result
