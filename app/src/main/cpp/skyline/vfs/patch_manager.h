// SPDX-License-Identifier: MPL-2.0
// Copyright © 2024 Strato Team and Contributors (https://github.com/strato-emu/)

#pragma once

#include <os.h>
#include <vfs/nca.h>

namespace skyline::vfs {
    class PatchManager {
      public:
        PatchManager();

        std::shared_ptr<vfs::Backing> PatchRomFS(const DeviceState &state, std::optional<vfs::NCA> nca , u64 ivfcOffset);

        std::shared_ptr<FileSystem> PatchExeFS(const DeviceState &state, std::shared_ptr<FileSystem> exefs);
    };
}
