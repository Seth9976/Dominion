// 函数: _Z27DomValidateExpansionEdition12DomExpansionR23DomExpansionEditionFlagP14TGGEntitlementi
// 地址: 0x9e40e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d u<= 0x13)
    int32_t x8_1 = 1 << arg1.d
    
    if ((x8_1 & 0xffa20) != 0)
        *arg2 = 0
        return 
    
    if ((x8_1 & 0x5dc) != 0)
        if ((ProfileHasEntitlementForFirstEdition(arg1).d & 1) != 0)
            return 
        
        *arg2 = 1
        return 

pthread_kill(pthread_self(), 6)
int32_t x0_1
int64_t x1
x0_1, x1 = XNoReturn()
return DefaultEditionFlag(x0_1, x1) __tailcall
