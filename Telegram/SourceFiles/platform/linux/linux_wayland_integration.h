/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

class QWindow;

namespace Platform {
namespace internal {

class WaylandIntegration {
public:
	static WaylandIntegration *Instance();
	bool startMove(QWindow *window);
	bool startResize(QWindow *window, Qt::Edges edges);
	bool showWindowMenu(QWindow *window);

private:
	WaylandIntegration();
};

} // namespace internal
} // namespace Platform
