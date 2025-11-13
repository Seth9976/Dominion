// 函数: _Z18TutorialGameActionRK8DomYield
// 地址: 0xb1ffec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg1 + 4)
DomYield const& x19 = arg1
int64_t var_18

if (x8 == 1)
    if (*(x19 + 0x10) == 2 && (*(x19 + 0x74) == 0xffffffff || *(x19 + 0x64) == 1))
        if (*(GetClient() + 0x5068) == 0)
        label_b2009c:
            
            if (*(GetClient() + 0x5068) != 0 && *(GetClient() + 0x5068) == 1)
                arg1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
                int64_t x8_11 = sx.q(*(gDomClient + 0x205cc))
                
                if (x8_11.d s< arg1.d)
                    int64_t x9_2 = var_18
                    
                    if (x9_2 != 0 && *(x9_2 + x8_11 * 0xb0 + 0x18) == 0xc)
                        TutorialContinue()
        else
            if (*(GetClient() + 0x5068) != 1)
                goto label_b2009c
            
            int32_t x0_4 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
            int64_t x8_6 = sx.q(*(gDomClient + 0x205cc))
            
            if (x8_6.d s>= x0_4)
                goto label_b2009c
            
            int64_t x9_1 = var_18
            
            if (x9_1 == 0 || *(x9_1 + x8_6 * 0xb0 + 0x18) != 0xa)
                goto label_b2009c
            
            TutorialContinue()
    
    x8 = *(x19 + 4)

if (x8 == 8 && *(x19 + 0x74) == 1 && *(GetClient() + 0x5068) != 0 && *(GetClient() + 0x5068) == 1)
    arg1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
    int64_t x8_17 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_17.d s< arg1.d)
        int64_t x9_3 = var_18
        
        if (x9_3 != 0 && *(x9_3 + x8_17 * 0xb0 + 0x18) == 0xe)
            TutorialContinue()

int32_t x8_27

if (*(x19 + 4) != 1)
    x8_27 = *(x19 + 4)
else
    if (*(x19 + 0x10) == 3 && *(x19 + 0x74) == 1 && (
            TutorialAdvanceStep(0xb, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78))))).d
            & 1) == 0)
        TutorialAdvanceStep(4, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))
    
    if (*(x19 + 4) != 1)
        x8_27 = *(x19 + 4)
    else
        int32_t x8_24 = *(x19 + 0x10)
        
        if (x8_24 != 2)
            goto label_b20274
        
        if (*(x19 + 0x74) == 1 && CardWhere(gDomClient + 0x20728, zx.q(*(x19 + 0x78))).d != 0x3ea)
            TutorialAdvanceStep(4, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))
        
        x8_27 = *(x19 + 4)
        
        if (x8_27 == 1)
            x8_24 = *(x19 + 0x10)
        label_b20274:
            
            if (x8_24 != 3)
                x8_27 = *(x19 + 4)
            else
                if (*(x19 + 0x74) == 0 && *(GetClient() + 0x5068) != 0
                        && *(GetClient() + 0x5068) == 1)
                    arg1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
                    int64_t x8_66 = sx.q(*(gDomClient + 0x205cc))
                    
                    if (x8_66.d s< arg1.d)
                        int64_t x9_8 = var_18
                        
                        if (x9_8 != 0 && *(x9_8 + x8_66 * 0xb0 + 0x18) == 0x1e)
                            TutorialContinue()
                
                x8_27 = *(x19 + 4)

if (x8_27 == 5 && *(x19 + 0x10) == 0x79 && *(GetClient() + 0x5068) != 0
        && *(GetClient() + 0x5068) == 1)
    arg1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
    int64_t x8_31 = sx.q(*(gDomClient + 0x205cc))
    
    if (x8_31.d s< arg1.d)
        int64_t x9_4 = var_18
        
        if (x9_4 != 0 && *(x9_4 + x8_31 * 0xb0 + 0x18) == 0x15)
            TutorialContinue()

int32_t x8_40 = *(x19 + 4)

if (x8_40 == 5)
    if (*(x19 + 0x10) == 6 && *(GetClient() + 0x5068) != 0 && *(GetClient() + 0x5068) == 1)
        arg1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
        int64_t x8_37 = sx.q(*(gDomClient + 0x205cc))
        
        if (x8_37.d s< arg1.d)
            int64_t x9_5 = var_18
            
            if (x9_5 != 0 && *(x9_5 + x8_37 * 0xb0 + 0x18) == 0x16)
                TutorialContinue()
    
    x8_40 = *(x19 + 4)

if (x8_40 != 4)
    goto label_b203bc

if (*(x19 + 0x74) == 1)
    TutorialAdvanceStep(0x18, zx.q(*(x19 + 0x78)))
    x8_40 = *(x19 + 4)
label_b203bc:
    
    if (x8_40 != 6)
        goto label_b203fc
    
    if (*(x19 + 0x74) == 1)
        TutorialAdvanceStep(0x17, zx.q(AbilitySource(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))
        x8_40 = *(x19 + 4)
    label_b203fc:
        
        if (x8_40 == 1 && *(x19 + 0x10) == 1 && *(x19 + 0x74) == 1)
            if (*(GetClient() + 0x5068) == 0)
                TutorialAdvanceStep(9, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))
            else if (*(GetClient() + 0x5068) != 1)
                TutorialAdvanceStep(9, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))
            else
                int32_t x0_26 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
                int64_t x8_47 = sx.q(*(gDomClient + 0x205cc))
                
                if (x8_47.d s>= x0_26)
                    TutorialAdvanceStep(9, 
                        zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))
                else
                    int64_t x9_6 = var_18
                    
                    if (x9_6 == 0 || *(x9_6 + x8_47 * 0xb0 + 0x18) != 0x1c)
                        TutorialAdvanceStep(9, 
                            zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))
                    else
                        TutorialContinue()

if (*(x19 + 4) != 1)
    return 

int32_t x8_51 = *(x19 + 0x10)

if (x8_51 != 8)
    goto label_b20524

if (*(x19 + 0x74) == 1)
    TutorialAdvanceStep(9, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))

if (*(x19 + 0x74) == 1 && *(x19 + 4) != 1)
    return 

x8_51 = *(x19 + 0x10)
label_b20524:

if (x8_51 == 2 && *(x19 + 0x74) == 1)
    TutorialAdvanceStep(9, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))

if (x8_51 == 2 && *(x19 + 0x74) == 1 && *(x19 + 4) != 1)
    return 

if (*(x19 + 0x74) == 1)
    TutorialAdvanceStep(0xd, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))

if (*(x19 + 0x74) == 1 && *(x19 + 4) != 1)
    return 

if (*(x19 + 0x10) == 0xe)
    TutorialAdvanceStep(0x1d, zx.q(CardWhat(gDomClient + 0x20728, zx.q(*(x19 + 0x78)))))
    return 

if (*(GetClient() + 0x5068) == 0 || *(GetClient() + 0x5068) != 1)
    return 

arg1 = GetActiveTutorial(zx.q(*(ActiveGameSafe() + 0x1c)), &var_18)
int64_t x8_61 = sx.q(*(gDomClient + 0x205cc))

if (x8_61.d s>= arg1.d)
    return 

int64_t x9_7 = var_18

if (x9_7 != 0 && *(x9_7 + x8_61 * 0xb0 + 0x18) == 0xf)
    TutorialContinue()
