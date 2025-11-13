// 函数: sub_f39224
// 地址: 0xf39224
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *(arg1 + 8)
int64_t* x0_1 = __dynamic_cast(**(arg1 + 0x10), _typeinfo_for_Botan::Private_Key, 
    _typeinfo_for_Botan::PK_Key_Agreement_Key, -1)
int32_t x20_2

if (x0_1 == 0)
    x20_2 = -0x1e
else
    int64_t x19_1 = *x20
    int64_t* x20_1 = x20[1]
    (*(*x0_1 + 0xb0))()
    void* var_38
    void* var_30_1
    
    if (x20_1 == 0)
        x20_2 = -0x1f
        
        if (var_38 != 0)
            var_30_1 = var_38
            operator delete(var_38)
    else
        size_t x2_1 = *x20_1
        int64_t var_30
        size_t x8_3 = var_30 - var_38
        *x20_1 = x8_3
        
        if (x19_1 == 0 || x2_1 u< x8_3)
            x20_2 = -0xa
            
            if (x2_1 != 0 && x19_1 != 0)
                memset(x19_1, 0, x2_1)
                x20_2 = -0xa
            
            if (var_38 != 0)
                var_30_1 = var_38
                operator delete(var_38)
        else if (x8_3 == 0)
            x20_2 = 0
            
            if (var_38 != 0)
                var_30_1 = var_38
                operator delete(var_38)
        else
            if (var_38 == 0)
                int64_t* x0_6 = Botan::assertion_failure(
                    "n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                
                if (var_38 != 0)
                    void* var_30_2 = var_38
                    operator delete(var_38)
                
                sub_1101e04(x0_6)
                noreturn
            
            memmove(x19_1, var_38, x8_3)
            x20_2 = 0
            
            if (var_38 != 0)
                var_30_1 = var_38
                operator delete(var_38)

return zx.q(x20_2)
