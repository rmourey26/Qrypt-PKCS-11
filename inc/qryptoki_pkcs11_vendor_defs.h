#ifndef _QRYPTOKI_PKCS11_VENDOR_DEFS_H
#define _QRYPTOKI_PKCS11_VENDOR_DEFS_H

#include "cryptoki.h"

#ifdef _WIN32
#pragma pack(push, cloudhsm_pkcs11_vendor_defines, 1)
#endif

#define QRYPT_CKR_START                     ((CKR_VENDOR_DEFINED) + 0x78560)
#define CKR_QRYPT_BASE_HSM_EMPTY            ((QRYPT_CKR_START) + 0)
#define CKR_QRYPT_BASE_HSM_OPEN_FAILED      ((QRYPT_CKR_START) + 1)
#define CKR_QRYPT_TOKEN_EMPTY               ((QRYPT_CKR_START) + 2)
#define CKR_QRYPT_TOKEN_INVALID             ((QRYPT_CKR_START) + 3)
#define CKR_QRYPT_CA_CERT_FAILURE           ((QRYPT_CKR_START) + 4)

#ifdef _WIN32
#pragma pack(pop, cloudhsm_pkcs11_vendor_defines)
#endif

#endif /* !_QRYPTOKI_PKCS11_VENDOR_DEFS_H */