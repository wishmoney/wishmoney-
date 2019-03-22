// Copyright (c) 2015-2016, The Forknote developers
//
// This file is part of Forknote.
//
// Forknote is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Forknote is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Forknote.  If not, see <http://www.gnu.org/licenses/>.

// Copyright (c) 2016, The Forknote developers
//
// This file is part of Forknote.
//
// Forknote is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Forknote is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Forknote.  If not, see <http://www.gnu.org/licenses/>.

#include "CoinBaseConfiguration.h"

namespace PaymentService {

namespace po = boost::program_options;

CoinBaseConfiguration::CoinBaseConfiguration() {
    CRYPTONOTE_NAME=CryptoNote::CRYPTONOTE_NAME;
    GENESIS_COINBASE_TX_HEX=CryptoNote::parameters::GENESIS_COINBASE_TX_HEX;
    CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX=CryptoNote::parameters::CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX;
    MONEY_SUPPLY=CryptoNote::parameters::MONEY_SUPPLY;
    EMISSION_SPEED_FACTOR=CryptoNote::parameters::EMISSION_SPEED_FACTOR;
    CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE=CryptoNote::parameters::CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE;
    CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1=CryptoNote::parameters::CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1;
    CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2=CryptoNote::parameters::CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2;
    CRYPTONOTE_DISPLAY_DECIMAL_POINT=CryptoNote::parameters::CRYPTONOTE_DISPLAY_DECIMAL_POINT;
    MINIMUM_FEE=CryptoNote::parameters::MINIMUM_FEE;
    DEFAULT_DUST_THRESHOLD=CryptoNote::parameters::DEFAULT_DUST_THRESHOLD;
    DIFFICULTY_TARGET=CryptoNote::parameters::DIFFICULTY_TARGET;
    CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW=CryptoNote::parameters::CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW;
    MAX_BLOCK_SIZE_INITIAL=CryptoNote::parameters::MAX_BLOCK_SIZE_INITIAL;
    EXPECTED_NUMBER_OF_BLOCKS_PER_DAY=0;
    UPGRADE_HEIGHT_V2=0;
    UPGRADE_HEIGHT_V3=0;
    KEY_IMAGE_CHECKING_BLOCK_INDEX=0;
    DIFFICULTY_WINDOW=CryptoNote::parameters::DIFFICULTY_WINDOW;
    DIFFICULTY_CUT=CryptoNote::parameters::DIFFICULTY_CUT;
    DIFFICULTY_LAG=CryptoNote::parameters::DIFFICULTY_LAG;
    CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT=CryptoNote::parameters::CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT;
}

void CoinBaseConfiguration::initOptions(boost::program_options::options_description& desc) {
  desc.add_options()
    ("CRYPTONOTE_NAME", po::value<std::string>()->default_value(CryptoNote::CRYPTONOTE_NAME), "Blockchain name")
    ("GENESIS_COINBASE_TX_HEX", po::value<std::string>()->default_value(CryptoNote::parameters::GENESIS_COINBASE_TX_HEX), "Genesis transaction hex")
    ("CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX", po::value<uint64_t>()->default_value(CryptoNote::parameters::CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX), "uint64_t")
    ("MONEY_SUPPLY", po::value<uint64_t>()->default_value(CryptoNote::parameters::MONEY_SUPPLY), "uint64_t")
    ("EMISSION_SPEED_FACTOR", po::value<unsigned>()->default_value(CryptoNote::parameters::EMISSION_SPEED_FACTOR), "unsigned")
    ("CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE", po::value<size_t>()->default_value(CryptoNote::parameters::CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE), "size_t")
    ("CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1", po::value<size_t>()->default_value(CryptoNote::parameters::CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1), "size_t")
    ("CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2", po::value<size_t>()->default_value(CryptoNote::parameters::CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2), "size_t")
    ("CRYPTONOTE_DISPLAY_DECIMAL_POINT", po::value<size_t>()->default_value(CryptoNote::parameters::CRYPTONOTE_DISPLAY_DECIMAL_POINT), "size_t")
    ("MINIMUM_FEE", po::value<uint64_t>()->default_value(CryptoNote::parameters::MINIMUM_FEE), "uint64_t")
    ("DEFAULT_DUST_THRESHOLD", po::value<uint64_t>()->default_value(CryptoNote::parameters::DEFAULT_DUST_THRESHOLD), "uint64_t")
    ("DIFFICULTY_TARGET", po::value<uint64_t>()->default_value(CryptoNote::parameters::DIFFICULTY_TARGET), "uint64_t")
    ("CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW", po::value<uint32_t>()->default_value(CryptoNote::parameters::CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW), "uint32_t")
    ("MAX_BLOCK_SIZE_INITIAL", po::value<size_t>()->default_value(CryptoNote::parameters::MAX_BLOCK_SIZE_INITIAL), "size_t")
    ("EXPECTED_NUMBER_OF_BLOCKS_PER_DAY", po::value<uint64_t>()->default_value(0), "uint64_t")
    ("UPGRADE_HEIGHT_V2", po::value<uint32_t>()->default_value(0), "uint32_t")
    ("UPGRADE_HEIGHT_V3", po::value<uint32_t>()->default_value(0), "uint32_t")
    ("KEY_IMAGE_CHECKING_BLOCK_INDEX", po::value<uint32_t>()->default_value(0), "uint32_t")
    ("DIFFICULTY_WINDOW", po::value<size_t>()->default_value(0), "size_t")
    ("DIFFICULTY_CUT", po::value<size_t>()->default_value(CryptoNote::parameters::DIFFICULTY_CUT), "size_t")
    ("DIFFICULTY_LAG", po::value<size_t>()->default_value(CryptoNote::parameters::DIFFICULTY_LAG), "size_t")
    ("CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT", po::value<uint64_t>()->default_value(CryptoNote::parameters::CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT), "uint64_t")
    ;

}

void CoinBaseConfiguration::init(const boost::program_options::variables_map& options) {
  if (options.count("CRYPTONOTE_NAME")) {
    CRYPTONOTE_NAME = options["CRYPTONOTE_NAME"].as<std::string>();
  }
  if (options.count("GENESIS_COINBASE_TX_HEX")) {
    GENESIS_COINBASE_TX_HEX = options["GENESIS_COINBASE_TX_HEX"].as<std::string>();
  }
  if (options.count("CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX")) {
    CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = options["CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX"].as<uint64_t>();
  }
  if (options.count("MONEY_SUPPLY")) {
    MONEY_SUPPLY = options["MONEY_SUPPLY"].as<uint64_t>();
  }
  if (options.count("EMISSION_SPEED_FACTOR")) {
    EMISSION_SPEED_FACTOR = options["EMISSION_SPEED_FACTOR"].as<unsigned>();
  }
  if (options.count("CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE")) {
    CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE = options["CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE"].as<size_t>();
  }
  if (options.count("CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1")) {
    CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1 = options["CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V1"].as<size_t>();
  }
  if (options.count("CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2")) {
    CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2 = options["CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE_V2"].as<size_t>();
  }
  if (options.count("CRYPTONOTE_DISPLAY_DECIMAL_POINT")) {
    CRYPTONOTE_DISPLAY_DECIMAL_POINT = options["CRYPTONOTE_DISPLAY_DECIMAL_POINT"].as<size_t>();
  }
  if (options.count("MINIMUM_FEE")) {
    MINIMUM_FEE = options["MINIMUM_FEE"].as<uint64_t>();
  }
  if (options.count("DEFAULT_DUST_THRESHOLD")) {
    DEFAULT_DUST_THRESHOLD = options["DEFAULT_DUST_THRESHOLD"].as<uint64_t>();
  }
  if (options.count("DIFFICULTY_TARGET")) {
    DIFFICULTY_TARGET = options["DIFFICULTY_TARGET"].as<uint64_t>();
  }
  if (options.count("CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW")) {
    CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW = options["CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW"].as<uint32_t>();
  }
  if (options.count("MAX_BLOCK_SIZE_INITIAL")) {
    MAX_BLOCK_SIZE_INITIAL = options["MAX_BLOCK_SIZE_INITIAL"].as<size_t>();
  }
  if (options.count("EXPECTED_NUMBER_OF_BLOCKS_PER_DAY")) {
    EXPECTED_NUMBER_OF_BLOCKS_PER_DAY = options["EXPECTED_NUMBER_OF_BLOCKS_PER_DAY"].as<uint64_t>();
  }
  if (options.count("UPGRADE_HEIGHT_V2")) {
    UPGRADE_HEIGHT_V2 = options["UPGRADE_HEIGHT_V2"].as<uint32_t>();
  }
  if (options.count("UPGRADE_HEIGHT_V3")) {
    UPGRADE_HEIGHT_V3 = options["UPGRADE_HEIGHT_V3"].as<uint32_t>();
  }
  if (options.count("KEY_IMAGE_CHECKING_BLOCK_INDEX")) {
    KEY_IMAGE_CHECKING_BLOCK_INDEX = options["KEY_IMAGE_CHECKING_BLOCK_INDEX"].as<uint32_t>();
  }
  if (options.count("DIFFICULTY_WINDOW")) {
    DIFFICULTY_WINDOW = options["DIFFICULTY_WINDOW"].as<size_t>();
  }
  if (options.count("DIFFICULTY_CUT")) {
    DIFFICULTY_CUT = options["DIFFICULTY_CUT"].as<size_t>();
  }
  if (options.count("DIFFICULTY_LAG")) {
    DIFFICULTY_LAG = options["DIFFICULTY_LAG"].as<size_t>();
  }
  if (options.count("CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT")) {
    DIFFICULTY_LAG = options["CRYPTONOTE_BLOCK_FUTURE_TIME_LIMIT"].as<uint64_t>();
  }
}

} //namespace PaymentService
