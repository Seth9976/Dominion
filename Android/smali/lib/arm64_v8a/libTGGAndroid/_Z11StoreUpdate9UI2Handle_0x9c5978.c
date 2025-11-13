// 函数: _Z11StoreUpdate9UI2Handle
// 地址: 0x9c5978
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, StoreClick)
void* var_58
int32_t i_2 = GameSpecific_GetDlcs(zx.q(*gStoreDlg), &var_58)
DlcDef* var_460[0x80]
int32_t x20

if (i_2 s< 1)
    x20 = 0
else
    void* x8_1 = var_58
    x20 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        if ((*(x8_1 + 4) | 4) != 7)
            var_460[sx.q(x20)] = x8_1
            x20 += 1
        
        i = i_1
        i_1 -= 1
        x8_1 += 0x80
    while (i != 1)

int32_t var_498
char* x1_3
int32_t x3
x1_3, x3 = GetBundleInfo(GetCurrentBundleDef(), &var_498)
uint64_t x4 = zx.q(*gStoreDlg)
int32_t x8_2 = *(gStoreDlg + 0xc)
int32_t x9_2

if (x4.d == 0)
    x9_2 = x20 + 4
else
    x9_2 = x20

int32_t x25 = x8_2 | x4.d
int32_t x22

if (x9_2 + 7 s< 0)
    x22 = x9_2 + 0xe
else
    x22 = x9_2 + 7

int32_t x9_4

x9_4 = x25 == 0 ? 4 : 8

int32_t x10_2 = x9_4 * x8_2
bool z

if (x8_2 s> 0)
    z = x4.d == 0
else
    z = false

int32_t x5

x5 = z ? x10_2 - 4 : x10_2

int32_t x9_5 = x5 + x9_4
int32_t x6

x6 = x20 s< x9_5 ? x20 : x9_5

if (x4.d == 2)
    if (x8_2 == 0)
        x5 = 0
        
        x6 = x20 s< 7 ? x20 : 7
    else
        int32_t x10_3 = 7 | (0x1fffffff & x8_2) << 3
        x5 = (x8_2 << 3) - 1
        
        x6 = x20 s< x10_3 ? x20 : x10_3

int32_t x27 = var_498
UI2SetInt(zx.q(x19), &data_11cf890, StoreDlgUpdateRow(zx.q(x19), x1_3, &var_460, x3, x4, x5, x6), 
    0xffffffff)
int32_t x8_3 = *gStoreDlg
int64_t* x1_4

if (x8_3 == 2)
    if (*(gStoreDlg + 0xc) == 0)
        UI2SetState(zx.q(x19), &data_11cfa70, 0xffffffff, 0)
        x1_4 = &data_11cf1d0
    else
        UI2SetState(zx.q(x19), &data_11cfa88, 0xffffffff, 0)
        x1_4 = &data_11cf1b8
else if (x8_3 == 1)
    x1_4 = &data_11cfab8
else
    if (x8_3 != 0)
        pthread_kill(pthread_self(), 6)
        return NextStoreItem(XNoReturn()) __tailcall
    
    int64_t result = UI2SetState(zx.q(x19), &data_11cfaa0, 0xffffffff, 0)
    
    if (x25 == 0)
        result = UI2SetState(zx.q(x19), &data_11cfad0, 0xffffffff, 0)
    
    int32_t var_48c
    
    if ((x27 & 0xfffffffe) == 2 && var_48c == 1)
        result = UI2SetState(zx.q(x19), &data_11cfae8, 0xffffffff, 0)
    
    int32_t x22_1 = x22 s>> 3
    int32_t var_494
    int32_t var_490
    int32_t x8_4
    
    if (((x25 == 0 ? 1 : 0) & (var_494 s< var_490 ? 1 : 0)) != 0)
        if (var_48c != 1)
            result = UI2SetState(zx.q(x19), &data_11cfb00, 0xffffffff, 0)
            x8_4 = *(gStoreDlg + 0xc)
            
            if (x8_4 s>= x22_1 - 1)
                goto label_9c5b74
            
            goto label_9c5ca8
        
        UI2SetState(zx.q(x19), &data_11cfb18, 0xffffffff, 0)
        int64_t var_4a0 = 0x10000200000003
        DlcDef* x0_11 = GameSepcific_GetDlcDef(&var_4a0)
        XString::XString()
        
        if ((GameCenterGetPrice(x0_11, &var_4a0) & 1) != 0)
            UI2SetState(zx.q(x19), &data_11cfb30, 0xffffffff, 0)
            UI2SetText(zx.q(x19), &data_11cfb48, &var_4a0, 0xffffffff)
        
        result = XString::~XString()
        x8_4 = *(gStoreDlg + 0xc)
        
        if (x8_4 s>= x22_1 - 1)
            goto label_9c5b74
        
        goto label_9c5ca8
    
    x8_4 = *(gStoreDlg + 0xc)
    
    if (x8_4 s< x22_1 - 1)
    label_9c5ca8:
        result = UI2SetState(zx.q(x19), &data_11cf1d0, 0xffffffff, 0)
        
        if (*(gStoreDlg + 0xc) s<= 0)
            return result
    else
    label_9c5b74:
        
        if (x8_4 s<= 0)
            return result
    
    x1_4 = &data_11cf1b8

return UI2SetState(zx.q(x19), x1_4, 0xffffffff, 0)
