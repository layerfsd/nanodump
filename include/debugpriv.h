#pragma once

typedef BOOL(WINAPI* LOOKUPPRIVILEGEVALUEW) (LPCWSTR lpSystemName, LPCWSTR lpName, PLUID lpLuid);

BOOL enable_debug_priv(void);