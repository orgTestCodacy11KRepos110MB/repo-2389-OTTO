#pragma once

#include "lib/util/visitor.hpp"

#include "app/input.hpp"

namespace otto {

  enum struct Led : std::uint8_t {
    channel0 = util::enum_integer(Key::channel0),
    channel1 = util::enum_integer(Key::channel1),
    channel2 = util::enum_integer(Key::channel2),
    channel3 = util::enum_integer(Key::channel3),
    channel4 = util::enum_integer(Key::channel4),
    channel5 = util::enum_integer(Key::channel5),
    channel6 = util::enum_integer(Key::channel6),
    channel7 = util::enum_integer(Key::channel7),
    channel8 = util::enum_integer(Key::channel8),
    channel9 = util::enum_integer(Key::channel9),
    seq0 = util::enum_integer(Key::seq0),
    seq1 = util::enum_integer(Key::seq1),
    seq2 = util::enum_integer(Key::seq2),
    seq3 = util::enum_integer(Key::seq3),
    seq4 = util::enum_integer(Key::seq4),
    seq5 = util::enum_integer(Key::seq5),
    seq6 = util::enum_integer(Key::seq6),
    seq7 = util::enum_integer(Key::seq7),
    seq8 = util::enum_integer(Key::seq8),
    seq9 = util::enum_integer(Key::seq9),
    seq10 = util::enum_integer(Key::seq10),
    seq11 = util::enum_integer(Key::seq11),
    seq12 = util::enum_integer(Key::seq12),
    seq13 = util::enum_integer(Key::seq13),
    seq14 = util::enum_integer(Key::seq14),
    seq15 = util::enum_integer(Key::seq15),
    shift = util::enum_integer(Key::shift),
    sends = util::enum_integer(Key::sends),
    plus = util::enum_integer(Key::plus),
    routing = util::enum_integer(Key::routing),
    minus = util::enum_integer(Key::minus),
    fx1 = util::enum_integer(Key::fx1),
    fx2 = util::enum_integer(Key::fx2),
    master = util::enum_integer(Key::master),
    play = util::enum_integer(Key::play),
    record = util::enum_integer(Key::record),
    arp = util::enum_integer(Key::arp),
    slots = util::enum_integer(Key::slots),
    twist1 = util::enum_integer(Key::twist1),
    twist2 = util::enum_integer(Key::twist2),
    looper = util::enum_integer(Key::looper),
    external = util::enum_integer(Key::external),
    sampler = util::enum_integer(Key::sampler),
    envelope = util::enum_integer(Key::envelope),
    voices = util::enum_integer(Key::voices),
    settings = util::enum_integer(Key::settings),
    sequencer = util::enum_integer(Key::sequencer),
    synth = util::enum_integer(Key::synth),
    unassigned_a = util::enum_integer(Key::unassigned_a),
    unassigned_b = util::enum_integer(Key::unassigned_b),
    unassigned_c = util::enum_integer(Key::unassigned_c),
    unassigned_d = util::enum_integer(Key::unassigned_d),
    unassigned_e = util::enum_integer(Key::unassigned_e),
    unassigned_f = util::enum_integer(Key::unassigned_f),
  };

  inline tl::optional<Led> led_from(Key k)
  {
    return util::enum_cast<Led>(util::enum_integer(k));
  }

  inline tl::optional<Key> key_from(Led l)
  {
    return util::enum_cast<Key>(util::enum_integer(l));
  }

  struct LEDColor {
    uint8_t r = 0, g = 0, b = 0;

    DECL_VISIT(r, g, b);
    auto operator<=>(const LEDColor&) const = default;
  };
} // namespace otto
