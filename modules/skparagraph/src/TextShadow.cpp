// Copyright 2019 Google LLC.
#include "include/core/SkColor.h"
#include "modules/skparagraph/include/TextShadow.h"

namespace skia {
namespace textlayout {

TextShadow::TextShadow() = default;
TextShadow::TextShadow(SkPaint paint, SkPoint offset)
        : fPaint(paint), fOffset(offset) {}

bool TextShadow::operator==(const TextShadow& other) const {
    if (fPaint != other.fPaint) return false;
    if (fOffset != other.fOffset) return false;

    return true;
}

bool TextShadow::operator!=(const TextShadow& other) const { return !(*this == other); }

bool TextShadow::hasShadow() const {
    if (!fOffset.isZero()) return true;

    return true;
}

}  // namespace textlayout
}  // namespace skia
