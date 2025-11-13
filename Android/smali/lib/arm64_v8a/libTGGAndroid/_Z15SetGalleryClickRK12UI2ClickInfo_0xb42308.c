// 函数: _Z15SetGalleryClickRK12UI2ClickInfo
// 地址: 0xb42308
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_44
int32_t x0_1 = CardsetIsZoomed(*(gDomClient + 0x82e28), &var_44)
char* x21 = *(arg1 + 8)
int32_t* var_1ac0
XString::XString(&var_1ac0)

if ((operator==(x21, &var_1ac0) & 1) == 0)
    int32_t x21_1 = *(arg1 + 0x20)
    XString::~XString()
    
    if (x21_1 == 2 && ((x0_1 ^ 1) & 1) != 0)
        GameDlgManagerDismiss(7, false)
        GameDlgManagerShow(0x10, 5)
else
    XString::~XString()
    GameDlgManagerDismiss(7, false)
    GameDlgManagerShow(0x10, 5)

char* x20_1 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_7 = operator==(x20_1, &var_1ac0)
XString::~XString()

if ((x0_7 & 1) != 0)
    DomGetExpansions(&var_1ac0)
    int32_t x8_4 = var_1ac0[sx.q(*(arg1 + 0x10)) * 0xa]
    int32_t x8_5
    
    if (*(gSetGallery + 4) == x8_4)
        x8_5 = 0
    else
        x8_5 = x8_4
    
    *(gSetGallery + 4) = x8_5
    *(gSetGallery + 8) = 0

char* x20_3 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_11 = operator==(x20_3, &var_1ac0)
XString::~XString()

if ((x0_11 & 1) != 0)
    *gSetGallery = 1

char* x20_5 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_14 = operator==(x20_5, &var_1ac0)
XString::~XString()
void* var_3450

if ((x0_14 & 1) != 0)
    int32_t x0_16 = DomGetExpansions(&var_3450)
    int32_t x20_7
    
    if (x0_16 s< 1)
        x20_7 = 0
    else
        int64_t i = 0
        x20_7 = 0
        
        do
            void* x8_6 = var_3450
            
            if (*(x8_6 + i + 4) != 0)
                int32_t x0_18 = ProfileHasEntitlementForExpansion(zx.q(*(x8_6 + i)), nullptr)
                void* x8_7 = var_3450
                
                if ((x0_18 & 1) != 0)
                    *(&var_1ac0 + (sx.q(x20_7) << 2)) = *(x8_7 + i + 4)
                    x20_7 += 1
                
                if (*(x8_7 + i + 8) != 0
                        && (ProfileHasEntitlementForFirstEdition(zx.q(*(x8_7 + i))) & 1) != 0)
                    *(&var_1ac0 + (sx.q(x20_7) << 2)) = *(var_3450 + i + 8)
                    x20_7 += 1
            
            i += 0x28
        while (mulu.dp.d(x0_16, 0x28) != i)
    
    int32_t x0_22 =
        GetNumSetPages(zx.q(*gSetGallery), zx.q(*(gSetGallery + 4)), x20_7, &var_1ac0, 4)
    int32_t x8_11 = *(gSetGallery + 8)
    int32_t x9_9
    
    x9_9 = x0_22 s> 8 ? x0_22 : 8
    
    int32_t x9_11
    
    if (x8_11 - 4 s> x9_9 - 8)
        x9_11 = x9_9 - 8
    else
        x9_11 = x8_11 - 4
    
    int32_t x8_12
    
    x8_12 = x8_11 s< 4 ? 0 : x9_11
    
    *(gSetGallery + 8) = x8_12 + *(arg1 + 0x10)

char* x20_8 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_25 = operator==(x20_8, &var_1ac0)
XString::~XString()

if ((x0_25 & 1) != 0)
    int32_t x20_10 = *DomExpDefGetByIndex(*(arg1 + 0x10))
    GameDlgManagerDismiss(7, false)
    
    if (x20_10 != 0x13)
        StoreItemDlgOpen(StoreItemIndexToDlc(0, *(arg1 + 0x10), 0), 0x7e7, 0)
    else
        GameDialogOpenStore(2, 0x7e7, 0)

char* x20_11 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_31 = operator==(x20_11, &var_1ac0)
XString::~XString()

if ((x0_31 & 1) != 0)
    int32_t x8_14 = *(gSetGallery + 4)
    *gSetGallery = 0
    
    if (x8_14 == 0)
        *(gSetGallery + 4) = 2

char* x20_13 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_34 = operator==(x20_13, &var_1ac0)
XString::~XString()

if ((x0_34 & 1) != 0)
    *gSetGallery = 1

char* x20_15 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_37 = operator==(x20_15, &var_1ac0)
XString::~XString()

if ((x0_37 & 1) != 0)
    *(gSetGallery + 8) -= 1

char* x20_17 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_40 = operator==(x20_17, &var_1ac0)
XString::~XString()

if ((x0_40 & 1) != 0)
    *(gSetGallery + 8) += 1

char* x20_19 = *(arg1 + 8)
XString::XString(&var_1ac0)
int32_t x0_43 = operator==(x20_19, &var_1ac0)
XString::~XString()

if ((x0_43 & 1) != 0)
    int32_t x0_45 = DomGetExpansions(&var_1ac0)
    int32_t var_130[0x28]
    int32_t x20_21
    
    if (x0_45 s< 1)
        x20_21 = 0
    else
        int64_t i_1 = 0
        x20_21 = 0
        
        do
            int32_t* x8_19 = var_1ac0
            
            if (*(x8_19 + i_1 + 4) != 0)
                int32_t x0_47 = ProfileHasEntitlementForExpansion(zx.q(*(x8_19 + i_1)), nullptr)
                int32_t* x8_20 = var_1ac0
                
                if ((x0_47 & 1) != 0)
                    var_130[sx.q(x20_21)] = *(x8_20 + i_1 + 4)
                    x20_21 += 1
                
                if (*(x8_20 + i_1 + 8) != 0
                        && (ProfileHasEntitlementForFirstEdition(zx.q(*(x8_20 + i_1))) & 1) != 0)
                    var_130[sx.q(x20_21)] = *(var_1ac0 + i_1 + 8)
                    x20_21 += 1
            
            i_1 += 0x28
        while (mulu.dp.d(x0_45, 0x28) != i_1)
    
    DomKingdomSet var_90
    GetCurrentSets(zx.q(*gSetGallery), *(gSetGallery + 8), zx.q(*(gSetGallery + 4)), x20_21, 
        &var_130, &var_90, 4)
    GameSetup* x0_51 = GetActiveGameSetup()
    GetKingdomConfig(x0_51)
    ToSetupConfig(&var_90 + (sx.q(*(arg1 + 0x10)) << 4))
    memcpy(&var_1ac0, &var_3450, 0x9c8)
    int64_t var_2854
    int64_t var_ec4_1 = var_2854
    int64_t x19_1 = sx.q(*(arg1 + 0x10))
    int32_t x8_26 = *(&var_90 + (x19_1 << 4))
    uint64_t x8_31
    int32_t x9_19
    
    if (x8_26 != 1)
        int32_t var_3cc_2 = 0
        
        if (x8_26 != 0)
            pthread_kill(pthread_self(), 6)
            return SetGalleryUpdate(XNoReturn()) __tailcall
        
        x8_31 = zx.q(*(&var_90 + (x19_1 << 4) + 8))
        x9_19 = 1
    else
        int32_t x8_29 = *(*(&var_90 + (x19_1 << 4) + 8) + 4)
        void var_2a88
        void var_10f8
        
        if (x8_29 == 0x1b1 || x8_29 == 0x1ad)
            memcpy(&var_10f8, &var_2a88, 0x200)
        x8_31 = *(&var_90 + (x19_1 << 4) + 8)
        int32_t var_3cc_1 = 0
        
        if (x8_31 == 0)
            x9_19 = 0
        else
            x8_31 = zx.q(*(x8_31 + 4))
            x9_19 = 2
    
    *(x0_51 + 0xc) = zx.q(x9_19) | (0xffffffff & x8_31) << 0x20
    SaveSetupData(x0_51, &var_1ac0)
    GameDlgManagerDismiss(7, false)
    GameDlgManagerShow(0x10, 5)

return 0
