from setuptools import find_packages
from setuptools import setup

setup(
    name='navigation',
    version='2025.0.0',
    packages=find_packages(
        include=('navigation', 'navigation.*')),
)
