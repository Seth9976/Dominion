// 函数: _Z18DeclareTwitterCard9UI2HandleRK18TwitterLayoutEntryi
// 地址: 0xbaaae4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg2 + 8)
int32_t x19 = arg1
uint64_t x1

if (*(GetClient() + 0x5068) == 0)
    x1 = 0x18
else
    x1 = zx.q(*(ActiveGame() + 0x30))

DomCardDef* x0_3 = DomDefGet(zx.q(x22), x1)
UI2SetState(zx.q(x19), x0_3 + 0x90, 0xffffffff, 0)
DomDeclareCardComponents(zx.q(x19), x0_3, nullptr, 3, 0)
DomDeclareType(zx.q(x19), x0_3, 3)
DomDeclareExpansion(zx.q(x19), x0_3)
UI2SetState(zx.q(x19), &data_182c6b8, 0xffffffff, 0)
LanguageStateSet(zx.q(x19))

if ((zx.d(data_182ab08) & 1) == 0 && __cxa_guard_acquire(&data_182ab08) != 0)
    data_1833940 = _vtable_for_UI2StateDecl + 0x10
    void* x0_25 = UI2StateDeclTryLookup("players_0")
    
    if (x0_25 == 0)
        (*data_1833940)(&data_1833940, "players_0")
        uint32_t x10_2 = *UI2StateDeclI_counter
        uint64_t x11_1 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_1833940
        *UI2StateDeclI_counter = x10_2 + 1
        data_1833948 = x11_1
    else
        (*data_1833940)(&data_1833940, *(x0_25 + 0x10))
    
    data_1833958 = _vtable_for_UI2StateDecl + 0x10
    void* x0_26 = UI2StateDeclTryLookup("players_1")
    
    if (x0_26 == 0)
        (*data_1833958)(&data_1833958, "players_1")
        uint32_t x10_4 = *UI2StateDeclI_counter
        uint64_t x11_2 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_1833958
        *UI2StateDeclI_counter = x10_4 + 1
        data_1833960 = x11_2
    else
        (*data_1833958)(&data_1833958, *(x0_26 + 0x10))
    
    data_1833970 = _vtable_for_UI2StateDecl + 0x10
    void* x0_27 = UI2StateDeclTryLookup("players_2")
    
    if (x0_27 == 0)
        (*data_1833970)(&data_1833970, "players_2")
        uint32_t x10_6 = *UI2StateDeclI_counter
        uint64_t x11_3 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_1833970
        *UI2StateDeclI_counter = x10_6 + 1
        data_1833978 = x11_3
    else
        (*data_1833970)(&data_1833970, *(x0_27 + 0x10))
    
    data_1833988 = _vtable_for_UI2StateDecl + 0x10
    void* x0_28 = UI2StateDeclTryLookup("players_3")
    
    if (x0_28 == 0)
        (*data_1833988)(&data_1833988, "players_3")
        uint32_t x10_8 = *UI2StateDeclI_counter
        uint64_t x11_4 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_1833988
        *UI2StateDeclI_counter = x10_8 + 1
        data_1833990 = x11_4
    else
        (*data_1833988)(&data_1833988, *(x0_28 + 0x10))
    
    data_18339a0 = _vtable_for_UI2StateDecl + 0x10
    void* x0_29 = UI2StateDeclTryLookup("players_4")
    
    if (x0_29 == 0)
        (*data_18339a0)(&data_18339a0, "players_4")
        uint32_t x10_10 = *UI2StateDeclI_counter
        uint64_t x11_5 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_18339a0
        *UI2StateDeclI_counter = x10_10 + 1
        data_18339a8 = x11_5
    else
        (*data_18339a0)(&data_18339a0, *(x0_29 + 0x10))
    
    data_18339b8 = _vtable_for_UI2StateDecl + 0x10
    void* x0_30 = UI2StateDeclTryLookup("players_5")
    
    if (x0_30 == 0)
        (*data_18339b8)(&data_18339b8, "players_5")
        uint32_t x10_12 = *UI2StateDeclI_counter
        uint64_t x11_6 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_18339b8
        *UI2StateDeclI_counter = x10_12 + 1
        data_18339c0 = x11_6
    else
        (*data_18339b8)(&data_18339b8, *(x0_30 + 0x10))
    
    data_18339d0 = _vtable_for_UI2StateDecl + 0x10
    void* x0_31 = UI2StateDeclTryLookup("players_6")
    
    if (x0_31 == 0)
        (*data_18339d0)(&data_18339d0, "players_6")
        uint32_t x10_14 = *UI2StateDeclI_counter
        uint64_t x11_7 = *UI2StateDeclI_head
        *UI2StateDeclI_head = &data_18339d0
        *UI2StateDeclI_counter = x10_14 + 1
        data_18339d8 = x11_7
    else
        (*data_18339d0)(&data_18339d0, *(x0_31 + 0x10))
    
    __cxa_guard_release(&data_182ab08)

UI2SetState(zx.q(x19), muls.dp.d(arg3, 0x18) + &data_1833940, 0xffffffff, 0)

if (zx.d(*(arg2 + 0xc)) != 0)
    UI2SetState(zx.q(x19), &data_1833048, 0xffffffff, 0)

bool z

if (arg3 s<= 4)
    z = arg3 == 3
else
    z = true

int32_t x2

x2 = z ? 3 : 2

UI2SetInt(zx.q(x19), &data_18331f8, x2, 0xffffffff)
UI2SetInt(zx.q(x19), &data_1833210, (arg3 + 1) s/ x2, 0xffffffff)
int64_t result = UI2SetInt(zx.q(x19), &data_18331e0, arg3, 0xffffffff)
int128_t var_1e0
__builtin_memset(&var_1e0, 0, 0x180)

if (arg3 s>= 1)
    int64_t x23_1 = 0
    uint64_t x26_1 = zx.q(arg3)
    int128_t* fp_1 = &var_1e0
    
    do
        int32_t x25_1
        
        if (*(fp_1 + 8) == "tbl_pile" && *fp_1 == x19 && x23_1 == zx.q(fp_1[1].d)
                && *(fp_1 + 0x18) == 0)
            x25_1 = *(fp_1 + 0x38)
            result = UI2Exists(zx.q(x25_1))
        
        if (*(fp_1 + 8) != "tbl_pile" || *fp_1 != x19 || x23_1 != zx.q(fp_1[1].d)
                || *(fp_1 + 0x18) != 0 || (result.d & 1) == 0)
            result = UI2GetHandle(zx.q(x19), "tbl_pile", x23_1.d)
            *(fp_1 + 0x38) = result.d
            
            if (result.d != 0)
                x25_1 = result.d
                *(fp_1 + 8) = "tbl_pile"
                *fp_1 = x19
                fp_1[1].d = x23_1.d
                *(fp_1 + 0x18) = 0
            label_baacc8:
                DeclarePlayerColor(zx.q(x25_1), zx.q(x23_1.d))
                int32_t x8_5 = *(x0_3 + 0xc0)
                int64_t x9_1 = *(x0_3 + 0xc8)
                int32_t x9_3
                
                if ((x9_1 & 0x80008000000) == 0)
                    x9_3 = (x8_5 != 0xc3d ? 1 : 0) & x9_1.d u>> 0x1d
                else
                    x9_3 = 2
                
                uint64_t x2_3
                
                if (x8_5 != 0x104b)
                    x2_3 = zx.q(x9_3)
                else
                    x2_3 = 1
                
                result = DeclarePileCount(zx.q(x25_1), *(arg2 + 0x10 + (x23_1 << 2)), x2_3)
        else if (x25_1 != 0)
            goto label_baacc8
        
        x23_1 += 1
        fp_1 = &fp_1[4]
    while (x26_1 != x23_1)
    
    if (arg3 s>= 1)
        int64_t x21_1 = 0
        int128_t* x27_1 = &var_1e0
        
        do
            int32_t x24_1
            
            if (*(x27_1 + 8) == "tbl_open" && *x27_1 == x19 && x21_1 == zx.q(x27_1[1].d)
                    && *(x27_1 + 0x18) == 0)
                x24_1 = *(x27_1 + 0x38)
                result = UI2Exists(zx.q(x24_1))
            
            if (*(x27_1 + 8) != "tbl_open" || *x27_1 != x19 || x21_1 != zx.q(x27_1[1].d)
                    || *(x27_1 + 0x18) != 0 || (result.d & 1) == 0)
                result = UI2GetHandle(zx.q(x19), "tbl_open", x21_1.d)
                *(x27_1 + 0x38) = result.d
                
                if (result.d != 0)
                    x24_1 = result.d
                    *(x27_1 + 8) = "tbl_open"
                    *x27_1 = x19
                    x27_1[1].d = x21_1.d
                    *(x27_1 + 0x18) = 0
                label_baae38:
                    result = DeclarePlayerColor(zx.q(x24_1), zx.q(x21_1.d))
                    int32_t x28_2 = *(arg2 + 0x28 + (x21_1 << 2))
                    
                    if (x28_2 s>= 1)
                        result = UI2SetState(zx.q(x24_1), &data_1833240, 0xffffffff, 0)
                        
                        if (x28_2 != 1)
                            result = UI2SetState(zx.q(x24_1), &data_1833258, 0xffffffff, 0)
            else if (x24_1 != 0)
                goto label_baae38
            
            x21_1 += 1
            x27_1 = &x27_1[4]
        while (x26_1 != x21_1)

return result
