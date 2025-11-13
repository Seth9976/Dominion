// 函数: sub_6b0c50
// 地址: 0x6b0c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76fd4d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* arg_4
int32_t* ebx = arg_4
*(data_147b078 + 0x24) = ebx
HRESULT eax_5 = D3D11CreateDevice(0, D3D_DRIVER_TYPE_HARDWARE, nullptr, 
    D3D11_CREATE_DEVICE_BGRA_SUPPORT, nullptr, 0, 7, arg1 + 4, nullptr, arg1 + 8)

if (eax_5 s< 0)
    HRESULT var_30_11 = eax_5
    void var_1c
    sub_63df30(&var_1c, "Failed to Create DX11 Device hr=%x")
    int32_t var_8_1 = 0
    char* eax_14 = sub_63d7e0(&var_1c)
    sub_63b870(eax_14, eax_14, "HaltMsg", "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x644, 
        "Dx11GraphicsInterface::GraphicsInterfaceAttach")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* eax_6 = *(arg1 + 4)
int32_t* var_18
int32_t eax_7 = (**eax_6)(eax_6, 0x87c7f8, &var_18)
int32_t var_34

if (eax_7 s>= 0)
    int32_t* eax_8 = var_18
    int32_t* var_14
    eax_7 = (*(*eax_8 + 0x18))(eax_8, 0x87c7d8, &var_14)
    
    if (eax_7 s>= 0)
        int32_t* eax_9 = var_14
        eax_7 = (*(*eax_9 + 0x18))(eax_9, 0x87c7e8, &arg_4)
        
        if (eax_7 s>= 0)
            sub_6b23a0(arg1, ebx, arg_4)
            int32_t* ecx_4 = arg_4
            eax_7 = (*(*ecx_4 + 0x20))(ecx_4, *(data_147b078 + 0x24), 2)
            
            if (eax_7 s>= 0)
                int32_t* eax_11 = arg_4
                (*(*eax_11 + 8))(eax_11)
                int32_t* eax_12 = var_14
                (*(*eax_12 + 8))(eax_12)
                int32_t* eax_13 = var_18
                int32_t result = (*(*eax_13 + 8))(eax_13)
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            char const* const var_30_12 = "Dx11GraphicsInterface::GraphicsInterfaceAttach"
            var_34 = 0x65f
        else
            char const* const var_30_6 = "Dx11GraphicsInterface::GraphicsInterfaceAttach"
            var_34 = 0x65a
    else
        char const* const var_30_4 = "Dx11GraphicsInterface::GraphicsInterfaceAttach"
        var_34 = 0x656
else
    char const* const var_30_2 = "Dx11GraphicsInterface::GraphicsInterfaceAttach"
    var_34 = 0x652

sub_63b870(eax_7, &data_801800, "SUCCEEDED(hr)", "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 
    var_34, "Dx11GraphicsInterface::GraphicsInterfaceAttach")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
