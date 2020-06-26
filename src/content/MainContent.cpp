/****************************************************************************
 * Copyright (C) 2015 Dimok
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ****************************************************************************/
#include "MainContent.h"
#include <gui/GuiController.h>
#include "common/common.h"
#include "Application.h"
#include <gui/video/CVideo.h>

MainContent::MainContent(int32_t w, int32_t h, int32_t GameIndex)
        : GuiFrame(w, h),
          particleBgImage(w, h, 50, 60.0f, 90.0f, 0.6f, 1.0f) {
    append(&particleBgImage);
}

MainContent::~MainContent() {

}

void MainContent::process() {
    GuiFrame::process();
}

void MainContent::update(GuiController *c) {
    GuiFrame::update(c);
}

void MainContent::draw(CVideo *pVideo) {
    GuiFrame::draw(pVideo);
}
