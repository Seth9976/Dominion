// 函数: sub_703ed0
// 地址: 0x703ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
uint32_t result = (*__glewCreateProgram)()

if (result != 0)
    (*__glewAttachShader)(result, arg1)
    (*__glewAttachShader)(result, arg2)
    (*__glewLinkProgram)(result)
    int32_t var_c = 0
    (*__glewGetProgramiv)(result, 0x8b82, &var_c)
    
    if (var_c == 1)
        CookieCheckFunction(result)
        return result
    
    void* var_10 = nullptr
    (*__glewGetProgramiv)(result, 0x8b84, &var_10)
    void* ebx_1 = var_10
    
    if (ebx_1 != 0)
        __alloca_probe_16(ebx_1)
        int32_t __saved_edi
        (*__glewGetProgramInfoLog)(result, ebx_1, 0, &__saved_edi)
        int32_t* var_20_7 = &__saved_edi
        sub_63b5f0("Could not link program:\n%s\n")
    
    (*__glewDeleteProgram)(result)

CookieCheckFunction(0)
return 0
