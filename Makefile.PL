# This Makefile.PL for  was generated by Dist::Zilla.
# Don't edit it but the dist.ini used to construct it.
BEGIN { require 5.014; }
use strict;
use warnings;
use ExtUtils::MakeMaker 6.30;

my %WriteMakefileArgs = (
  'ABSTRACT' => 'DEPRECATED: write syntax extensions in perl',
  'AUTHOR' => 'Jesse Luehrs <doy@tozt.net>',
  'BUILD_REQUIRES' => {
    'Carp' => '0',
    'Exporter' => '0',
    'File::Find' => '0',
    'File::Temp' => '0',
    'Test::More' => '0.88',
    'base' => '0',
    'if' => '0',
    'lib' => '0'
  },
  'CONFIGURE_REQUIRES' => {
    'Devel::CallParser' => '0',
    'ExtUtils::MakeMaker' => '6.30'
  },
  'DISTNAME' => 'Parse-Keyword',
  'EXE_FILES' => [],
  'LICENSE' => 'mit',
  'NAME' => 'Parse::Keyword',
  'NORECURS' => 1,
  'PREREQ_PM' => {
    'Devel::CallParser' => '0',
    'XSLoader' => '0',
    'strict' => '0',
    'warnings' => '0'
  },
  'VERSION' => '0.08',
  'clean' => {
    'FILES' => 'callparser1.h'
  },
  'test' => {
    'TESTS' => 't/*.t t/fun/*.t t/try/*.t'
  }
);


unless ( eval { ExtUtils::MakeMaker->VERSION(6.56) } ) {
  my $br = delete $WriteMakefileArgs{BUILD_REQUIRES};
  my $pp = $WriteMakefileArgs{PREREQ_PM};
  for my $mod ( keys %$br ) {
    if ( exists $pp->{$mod} ) {
      $pp->{$mod} = $br->{$mod} if $br->{$mod} > $pp->{$mod};
    }
    else {
      $pp->{$mod} = $br->{$mod};
    }
  }
}

delete $WriteMakefileArgs{CONFIGURE_REQUIRES}
  unless eval { ExtUtils::MakeMaker->VERSION(6.52) };

use File::Spec::Functions 'abs2rel';
use Devel::CallParser 'callparser1_h', 'callparser_linkable';
open my $fh, '>', 'callparser1.h' or die "Couldn't write to callparser1.h";
$fh->print(callparser1_h);
my @linkable = map { abs2rel($_) } callparser_linkable;
unshift @linkable, '$(BASEEXT)$(OBJ_EXT)' if @linkable;
$WriteMakefileArgs{OBJECT} = join(' ', @linkable) if @linkable;

WriteMakefile(%WriteMakefileArgs);

