// 函数: _Z17QueryTwoMonthsAgoRK4Date
// 地址: 0xb3e9fc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_20 = *arg1
int32_t var_18 = 1
int64_t x0_1
int32_t x1
x0_1, x1 = DateAdd_Day(&var_20, 0xffffffff)
var_20 = x0_1
int32_t var_18_1 = x1
int64_t var_30 = x0_1
int32_t var_28 = 1
int64_t x0_3
char x1_1
x0_3, x1_1 = DateAdd_Day(&var_30, 0xffffffff)
var_30 = x0_3
void* x0_4 = GetActiveProfile()

for (Date* i = *(*(x0_4 + 0x7730) + ((((0xffff00ff & zx.q(var_30.d << 0x10))
        | zx.q(zx.d((var_30:4.d).b) << 8) | zx.q(x1_1)) & zx.q(*(x0_4 + 0x7738))) << 3)); i != 0; 
        i = *(i + 0x10))
    int64_t result = operator!=(&var_30, i)
    
    if ((result.d & 1) == 0)
        return result

return ClientQueryDailyStatus(8, &var_30, &var_30)
