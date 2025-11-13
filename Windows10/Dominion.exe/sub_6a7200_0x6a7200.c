// 函数: sub_6a7200
// 地址: 0x6a7200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = __chkstk(0x1014)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
char* edx = arg2
int32_t var_1010 = 0x1000
int32_t eax_1

do
    eax_1.b = *edx
    edx = &edx[1]
while (eax_1.b != 0)
void var_100c
int32_t result = botan_base64_decode(arg2, edx - &edx[1], &var_100c, &var_1010)
int32_t var_18_1
char const* const var_14_1

if (result == 0)
    int32_t var_1018
    result = botan_pubkey_load(&var_1018, &var_100c, var_1010)
    
    if (result == 0)
        char* eax_2 = *arg1
        var_1010 = 0x1000
        int32_t edx_2
        
        if (eax_2 == 0 || *eax_2 == 0)
            edx_2 = 0
        else
            edx_2 = *(sub_63d4e0(arg1) + 8)
        
        char* eax_4 = *arg1
        char* const ecx_3 = &data_801800
        
        if (eax_4 != 0)
            ecx_3 = eax_4
        
        result = botan_base64_decode(ecx_3, edx_2, &var_100c, &var_1010)
        
        if (result == 0)
            int32_t var_1014
            result = botan_pk_op_verify_create(&var_1014, var_1018, "EMSA1(SHA-256)", 0)
            
            if (result == 0)
                result = botan_pk_op_verify_update(var_1014, ecx, 0x20)
                
                if (result == 0)
                    int32_t eax_5 = botan_pk_op_verify_finish(var_1014, &var_100c, var_1010)
                    result = botan_pubkey_destroy(var_1018)
                    
                    if (result == 0)
                        result = botan_pk_op_verify_destroy(var_1014)
                        
                        if (result == 0)
                            result.b = eax_5 == 0
                            CookieCheckFunction(result)
                            return result
                        
                        var_14_1 = "CryptoVerify"
                        var_18_1 = 0x6f
                    else
                        var_14_1 = "CryptoVerify"
                        var_18_1 = 0x6c
                else
                    var_14_1 = "CryptoVerify"
                    var_18_1 = 0x67
            else
                var_14_1 = "CryptoVerify"
                var_18_1 = 0x64
        else
            var_14_1 = "CryptoVerify"
            var_18_1 = 0x60
    else
        var_14_1 = "CryptoVerify"
        var_18_1 = 0x5c
else
    var_14_1 = "CryptoVerify"
    var_18_1 = 0x58

sub_63b870(result, &data_801800, "result == 0", "C:\x\ax2017\Engine\Crypto.cpp", var_18_1, var_14_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
