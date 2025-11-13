// 函数: _Z24KingdomHasExtendedSupplyR7DomGameP11DomCardEnum
// 地址: 0xb1c6b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *DomBoardPile(arg1, 0x13)

if (x8 != 0)
    *arg2 = x8
    int32_t x8_1 = *DomBoardPile(arg1, 0x14)
    
    if (x8_1 != 0)
        *(arg2 + 4) = x8_1
        int32_t x8_2 = *DomBoardPile(arg1, 0x15)
        
        if (x8_2 != 0)
            *(arg2 + 8) = x8_2
            int32_t x8_3 = *DomBoardPile(arg1, 0x16)
            
            if (x8_3 != 0)
                *(arg2 + 0xc) = x8_3
                int32_t x8_4 = *DomBoardPile(arg1, 0x17)
                
                if (x8_4 != 0)
                    *(arg2 + 0x10) = x8_4
                    int32_t x8_5 = *DomBoardPile(arg1, 0x18)
                    
                    if (x8_5 != 0)
                        *(arg2 + 0x14) = x8_5
                        int32_t x8_6 = *DomBoardPile(arg1, 0x19)
                        
                        if (x8_6 != 0)
                            *(arg2 + 0x18) = x8_6
                            int32_t x8_7 = *DomBoardPile(arg1, 0x1a)
                            
                            if (x8_7 != 0)
                                *(arg2 + 0x1c) = x8_7
                                int32_t x8_8 = *DomBoardPile(arg1, 0x1b)
                                
                                if (x8_8 != 0)
                                    *(arg2 + 0x20) = x8_8
                                    int32_t x8_9 = *DomBoardPile(arg1, 0x1c)
                                    
                                    if (x8_9 != 0)
                                        *(arg2 + 0x24) = x8_9
                                        int32_t x8_10 = *DomBoardPile(arg1, 0x1d)
                                        
                                        if (x8_10 != 0)
                                            *(arg2 + 0x28) = x8_10
                                            int32_t x8_11 = *DomBoardPile(arg1, 0x1e)
                                            
                                            if (x8_11 != 0)
                                                *(arg2 + 0x2c) = x8_11
                                                int32_t x8_12 = *DomBoardPile(arg1, 0x1f)
                                                
                                                if (x8_12 != 0)
                                                    *(arg2 + 0x30) = x8_12
                                                    int32_t x8_13 = *DomBoardPile(arg1, 0x20)
                                                    
                                                    if (x8_13 != 0)
                                                        *(arg2 + 0x34) = x8_13
                                                        int32_t x8_14 = *DomBoardPile(arg1, 0x21)
                                                        
                                                        if (x8_14 != 0)
                                                            *(arg2 + 0x38) = x8_14

int32_t* x0_30 = DomBoardPile(arg1, 0x1d)
int32_t x8_15 = *DomBoardPile(arg1, 0x1e)

if (*x0_30 == 0)
    if (x8_15 == 0)
        return 0
else if (x8_15 != 0)
    return 3

int32_t x19_1
int32_t x20_2

if (*(gDomClient + 0x21e24) == 0)
    x19_1 = 0xa
    
    if (*(gDomClient + 0x21e74) != 0)
    label_b1c930:
        
        if (*(gDomClient + 0x21e84) == 0)
            x20_2 = 1
        else if (*(gDomClient + 0x21e94) == 0)
            x20_2 = 2
        else if (*(gDomClient + 0x21ea4) == 0)
            x20_2 = 3
        else if (*(gDomClient + 0x21eb4) != 0)
            x20_2 = 5
        else
            x20_2 = 4
    else
        x20_2 = 0
else if (*(gDomClient + 0x21e34) == 0)
    x19_1 = 0xb
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_b1c930
    
    x20_2 = 0
else if (*(gDomClient + 0x21e44) == 0)
    x19_1 = 0xc
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_b1c930
    
    x20_2 = 0
else if (*(gDomClient + 0x21e54) == 0)
    x19_1 = 0xd
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_b1c930
    
    x20_2 = 0
else
    if (*(gDomClient + 0x21e64) != 0)
        x19_1 = 0xf
    else
        x19_1 = 0xe
    
    if (*(gDomClient + 0x21e74) != 0)
        goto label_b1c930
    
    x20_2 = 0

int32_t x0_33 = NumExtraPiles()
int32_t x0_34 = NearestAspectRatio()
char x4_1

if (zx.d(*(GetLocalSettings() + 0x38)) == 0)
    x4_1 = 0
else if (*(GetClient() + 0x5068) != 1)
    x4_1 = 1
else
    int64_t var_38
    int32_t x0_39 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_38)
    x4_1 = (*(gDomClient + 0x205cc) s>= x0_39 ? 1 : 0).b | (var_38 == 0 ? 1 : 0).b

int64_t result = LayoutBaneStyle(CalcLayoutStyle(x19_1, x20_2, x0_33, (x0_34 != 0 ? 1 : 0).b, x4_1))

if (result.d == 2 || result.d == 1)
    return result

pthread_kill(pthread_self(), 6)
DomGame* x0_43
DomCardEnum** x1_2
x0_43, x1_2 = XNoReturn()
return KingdomHasDruidBoons(x0_43, x1_2) __tailcall
