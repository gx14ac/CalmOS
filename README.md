## Build
`cd kernel` 
`make clean && make`
`cd ~/.ghq/github.com/tianocore/edk2`
`source edksetup.sh`
`build`
`~/.ghq/github.com/uchan-nos/mikanos-build/devenv/run_qemu.sh Build/CalmLoaderPkgX64/DEBUG_CLANGPDB/X64/Loader.efi $HOME/Source/Calm-OS/kernel/kernel.elf`