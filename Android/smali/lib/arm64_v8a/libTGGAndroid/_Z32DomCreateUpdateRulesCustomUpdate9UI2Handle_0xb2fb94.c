// 函数: _Z32DomCreateUpdateRulesCustomUpdate9UI2Handle
// 地址: 0xb2fb94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
UI2SetHandler(arg1, DomCreateUpdateRulesCustomClick)

if ((*gCreateDlg & 0xfffffffe) == 2)
    UI2SetState(zx.q(x19), &data_182e170, 0xffffffff, 0)

GetKingdomConfig(GetActiveGameSetup())
int32_t var_1a50
int32_t* i = &var_1a50
int64_t* var_1a30 = &data_182e308
int64_t x20 = 0
void var_1b50
void* x27 = &var_1b50
void var_1c50
void* x28 = &var_1c50
int64_t* var_1a18 = &data_182e2c0
int64_t* var_1a10 = &data_182e338
int64_t* var_1a28 = &data_182e368
int64_t* var_1a48 = &data_182e2d8
int64_t* var_1a40 = &data_182e350
int64_t* var_1a00 = &data_182e2f0
int64_t* var_19f8 = &data_182e350
int32_t var_2f4
var_1a50 = var_2f4
int32_t var_2f0
int32_t var_1a38 = var_2f0
int32_t var_2ec
int32_t var_1a20 = var_2ec
int32_t var_2e8
int32_t var_1a08 = var_2e8
void var_19f0
int64_t result

do
    int64_t x22_1 = sx.q(*i)
    UI2StateDecl* x25_2 = *(i + 8)
    UI2StateDecl* x24_1 = *(i + 0x10)
    int32_t x0_4
    int32_t x23_1
    
    if (*(x27 + 8) == "tbl_rules" && *x27 == x19 && x20 == zx.q(*(x27 + 0x10))
            && *(x27 + 0x18) == 0)
        x23_1 = *(x27 + 0x38)
        x0_4 = UI2Exists(zx.q(x23_1))
    
    if (*(x27 + 8) != "tbl_rules" || *x27 != x19 || x20 != zx.q(*(x27 + 0x10)) || *(x27 + 0x18) != 0
            || (x0_4 & 1) == 0)
        int32_t x0_6 = UI2GetHandle(zx.q(x19), "tbl_rules", x20.d)
        x23_1 = x0_6
        *(x27 + 0x38) = x0_6
        
        if (x0_6 != 0)
            *(x27 + 8) = "tbl_rules"
            *x27 = x19
            *(x27 + 0x10) = x20.d
            *(x27 + 0x18) = 0
    
    UI2SetState(zx.q(x23_1), x25_2, 0xffffffff, 0)
    UI2SetState(zx.q(x23_1), x24_1, 0xffffffff, 0)
    char* x24_2 = (&data_11ad3a0)[x22_1]
    int32_t x0_10
    int32_t x25_1
    
    if (*(x28 + 8) == x24_2 && *x28 == x23_1 && *(x28 + 0x10) == 0xffffffff)
        x25_1 = *(x28 + 0x38)
        x0_10 = UI2Exists(zx.q(x25_1))
    
    if (*(x28 + 8) != x24_2 || *x28 != x23_1 || *(x28 + 0x10) != 0xffffffff || (x0_10 & 1) == 0)
        int32_t x0_12 = UI2GetHandle(zx.q(x23_1), x24_2)
        x25_1 = x0_12
        *(x28 + 0x38) = x0_12
        
        if (x0_12 != 0)
            *(x28 + 8) = x24_2
            *x28 = x23_1
            *(x28 + 0x10) = 0xffffffff
    
    result = UI2SetState(zx.q(x25_1), &data_182e380, 0xffffffff, 0)
    i = &i[6]
    x20 += 1
    x27 += 0x40
    x28 += 0x40
while (i != &var_19f0)

return result
